//
// Created by aleksandr on 21.07.2024.
//

#ifndef CPLUSPLUSLAZY_USER_H
#define CPLUSPLUSLAZY_USER_H

#include <string>
#include <postgresql/libpq-fe.h>

using namespace std;

class User {
public:
    User();

    int getId();
    string getName() const;
    string getSurname() const;
    string getUsername() const;
    string getCreatedAt() const;
    string getUpdatedAt() const;

    void setName(const string &name);
    void setSurname(const string &surname);
    void setUsername(const string &username);

    static User* findByUsername(const string &username);

private:
    int id;
    string name;
    string surname;
    string username;
    string createdAt;
    string updatedAt;
};


#endif //CPLUSPLUSLAZY_USER_H
