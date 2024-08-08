#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> PBDS;

int main() {
    PBDS st;

    st.insert(15);
    st.insert(1);
    st.insert(10);
    st.insert(3);
    st.insert(4);


    // find_by_order tells the kth largest element in the set 
    
    for(int i = 0; i <st.size(); i++) {
        cout<<i<<" "<<*st.find_by_order(i)<<endl;
    }

   // order_of_key tells how many elements is strictly smaller than the given element

   cout<<st.order_of_key(12)<<endl;

}




