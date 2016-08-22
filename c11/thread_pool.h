#include <thread>
#include <list>
#include <mutex>
#include <condition_variable>
#include <utility> //std::forward move
#include <functional> //std::function
#include <vector>

namespace tool {
template<typename T>
class SyncQueue
{
public:
    SyncQueue() {
        /* queue_ = std::list<T>(); */
        /* mutex_ = std::mutex(); */
        /* cv_full_ = std::condition_variable(); */
        /* cv_empty_ = std::condition_variable(); */
    }

    void put(T &&t);

    void take(T &t);

    void take(std::list<T> &);

    ~SyncQueue() {}

private:
    std::list<T> queue_;
    std::mutex mutex_;
    // std::condition_variable_any condition_full_;
    std::condition_variable_any cv_empty_;
};

class ThreadPool {
public:
    typedef std::function<void ()> Task;
    ThreadPool(int thread_num): thread_num_(thread_num) {}

    void start();

    void thread_run();

    void add(Task &task) {queue_.put(task);}

    virtual ~ThreadPool() {}

private:
    SyncQueue<Task> queue_;
    int thread_num_;
    std::vector<std::thread> threads;
};

} //namespace tool
