#include "bits/stdc++.h"
using namespace std;

class File {
    string name;

public:
    File(const string& fileName) : name(fileName) {}

    string getName() const {
        return name;
    }
};

class Directory {
    string name;
    map<string, Directory*> directories;
    vector<File*> files;

public:
    Directory(const string& dirName) : name(dirName) {}

    Directory* createDirectory(const string& dirName) {
        if (directories.find(dirName) != directories.end()) {
            cout << "Directory '" << dirName << "' already exists." << endl;
            return directories[dirName];
        }

        Directory* newDir = new Directory(dirName);
        directories[dirName] = newDir;
        return newDir;
    }

    void addFile(File* newFile) {
        files.push_back(newFile);
    }

    void display(int depth = 0) {
        for (int i = 0; i < depth; ++i) {
            cout << "  ";
        }
        cout << "|-- " << name << "/" << endl;
        for (const auto& pair : directories) {
            pair.second->display(depth + 1);
        }
        for (const auto& file : files) {
            for (int i = 0; i <= depth; ++i) {
                cout << "  ";
            }
            cout << "|-- " << file->getName() << endl;
        }
    }
};

class FileSystem {
    Directory* root;

public:
    FileSystem() {
        root = new Directory("Root");
    }

    void mkdir(const string& path) {
        vector<string> dirs;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {
            if (!token.empty()) {
                dirs.push_back(token);
            }
        }

        Directory* currentDir = root;
        for (const string& dirName : dirs) {
            currentDir = currentDir->createDirectory(dirName);
        }
    }

    void touch(const string& filePath) {
        size_t pos = filePath.find_last_of('/');
        string path = filePath.substr(0, pos);
        string fileName = filePath.substr(pos + 1);

        Directory* currentDir = root;
        vector<string> dirs;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {
            if (!token.empty()) {
                dirs.push_back(token);
            }
        }

        for (const string& dirName : dirs) {
            currentDir = currentDir->createDirectory(dirName);
        }

        File* newFile = new File(fileName);
        currentDir->addFile(newFile);
    }

    void displayFileSystem() {
        cout << "File System Structure:" << endl;
        root->display();
    }
};

int main() {
    FileSystem fs;
    fs.mkdir("documents/work/projects");
    fs.touch("documents/work/file1.txt");
    fs.mkdir("documents/personal/photos");
    fs.touch("documents/personal/file2.jpg");
    fs.mkdir("documents");
    fs.mkdir("music/songs");
    fs.touch("music/songs/song.mp3");
    fs.mkdir("documents/work");
    
    fs.displayFileSystem();

    return 0;
}
