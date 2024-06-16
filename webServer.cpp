#include "webServer.h"
#include <iostream>

WebServer::WebServer(int id) : id(id) {}

void WebServer::addRequest(const Request& request) {
    requestQueue.push(request);
}

void WebServer::processRequests() {
    while (!requestQueue.empty()) {
        Request req = requestQueue.front();
        requestQueue.pop();
        std::cout << "WebServer " << id << " processing request " << req.getId() << std::endl;
    }
}

int WebServer::getId() const {
    return id;
}
