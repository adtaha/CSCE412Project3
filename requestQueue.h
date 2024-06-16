#ifndef REQUESTQUEUE_H
#define REQUESTQUEUE_H

#include "request.h"
#include <queue>

class RequestQueue {
public:
    void addRequest(const Request& request);
    bool isEmpty() const;
    Request getNextRequest();

private:
    std::queue<Request> queue;
};

#endif
