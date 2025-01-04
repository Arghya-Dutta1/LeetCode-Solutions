class TaskManager {
public:
    struct Task{
        int user;
        int time;
        int priority;
    };
    
    priority_queue<tuple<int, int, int>> pq;
    unordered_map<int, Task> tasks;

    TaskManager(vector<vector<int>>& tasks) {
        for(vector<int>& task:tasks){
            add(task[0], task[1], task[2]);
        }
    }

    void add(int user, int time, int priority) {
        tasks[time] = {user, time, priority};
        pq.push({priority, time, user});
    }

    void edit(int time, int priority) {
        if(tasks.find(time)!=tasks.end()){
            tasks[time].priority=priority;
            pq.push({priority, time, tasks[time].user});
        }
    }

    void rmv(int time) {
        if(tasks.find(time)!=tasks.end()){
            tasks.erase(time);
        }
    }

    int execTop() {
        while(pq.size()!=0){
            tuple<int, int, int> topElement=pq.top();
            pq.pop();
            
            int priority=get<0>(topElement);
            int time=get<1>(topElement);
            int user=get<2>(topElement);

            if(tasks.find(time)!=tasks.end() && tasks[time].priority==priority){
                tasks.erase(time);
                return user;
            }
        }
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */