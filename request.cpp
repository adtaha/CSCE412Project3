#include "request.h"

Request::Request(int id) : id(id) {}

int Request::getId() const {
    return id;
}