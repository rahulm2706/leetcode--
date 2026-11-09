class Solution {
public:
    typedef pair<int, int> P; //stores server load and server number
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        set<int> available_servers;
        for(int i = 0 ; i<k;i++){
            available_servers.insert(i);
        }

        priority_queue<P , vector<P>, greater<P>> busy_servers;
        vector<int> countRequests(k,0);

        for(int i =0 ; i < arrival.size() ; i++){
            int time = arrival[i];

            while(!busy_servers.empty() && busy_servers.top().first <= time){  //release the server into available
                int server = busy_servers.top().second;

                busy_servers.pop();
                available_servers.insert(server);
            }

            int target = i%k;

            auto it = available_servers.lower_bound(target);

            if(it == available_servers.end()){
                it = available_servers.begin(); //wrap around
            }
            if(it == available_servers.end()){
                continue;                   //no servers available, drop req
            }

            int targetserver = *it;
            available_servers.erase(it);
            busy_servers.push({time+load[i] , targetserver});
            countRequests[targetserver]++;
        }
        int maxreq = *max_element( begin(countRequests) , end(countRequests));

        vector<int> result ;
        for(int i = 0 ;  i< k ; i++){
            if(countRequests[i] == maxreq){
                result.push_back(i);
            }
        }
        return result;
    }
};