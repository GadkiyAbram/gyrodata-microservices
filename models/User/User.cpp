//
// Created by aleksandr on 21.07.2024.
//

#include "User.h"
#include "iostream"

User::User() : id(0), name(""), surname(""), username(""), createdAt(""), updatedAt("") {}

// Getters
int User::getId() {
    return id;
}

string User::getName() const {
    return name;
}

string User::getSurname() const {
    return surname;
}

string User::getUsername() const {
    return username;
}

string User::getCreatedAt() const {
    return createdAt;
}

string User::getUpdatedAt() const {
    return updatedAt;
}

//Setters
void User::setName(const string &name) {
    this->name = name;
}

void User::setSurname(const string &surname) {
    this->surname = surname;
}

void User::setUsername(const string &username) {
    this->username = username;
}

User* User::findByUsername(const string &username) {

}


