#ifndef REQUEST_H
#define REQUEST_H

class Request {
public:
    Request(int id);
    int getId() const;

private:
    int id;
};

#endif