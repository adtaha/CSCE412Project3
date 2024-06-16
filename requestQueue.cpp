#include "requestQueue.h"

void RequestQueue::addRequest(const Request& request) {
    queue.push(request);
}

bool RequestQueue::isEmpty() const {
    return queue.empty();
}

Request RequestQueue::getNextRequest() {
    if (!queue.empty()) {
        Request req = queue.front();
        queue.pop();
        return req;
    }
    // Return a default constructed Request if queue is empty
    return Request(-1);
}
