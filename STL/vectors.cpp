void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int>>vec;
    v.push_back({1, 2});
    v.emplace_back(1,2);
    vector<int> v(5, 100); //{100, 100, 100, 100, 100}
    vector<int> v1(5, 20);
    vector<int> v2(v1); //copy the vector
    //iterate through the vector
    for(auto it : v){
        cout<<it<<" ";
    }
    //deletion 
   // {10, 20, 30}
   v.erase(v.begin() + 1); //delete 1 element 
   //delete from x to y 
   //{10, 20, 12, 34, 50, 35}
   v.erase(v.begin() + 2, v.begin() + 4) // [begin, end)
   v.pop_back(10);
   v.size()
}
