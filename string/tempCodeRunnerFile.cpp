bool compare(string s,string b){
    sort(s.begin(),s.end());
    sort(b.begin(),b.end());
    
    if(s == b){
        return true;
    }
    
    return false;
    
}