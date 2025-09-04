#include "connectionManager.h"
#include "../server/mybev.hpp"

ConnectionManager& ConnectionManager::getInstance()
{
    static ConnectionManager instance;
    return instance;
}

void ConnectionManager::addConnection(const std::string& userId, my_bev* mbev)
{
    std::lock_guard<std::mutex> lock(mutex_);
    userConnections[userId] = mbev;
}

void ConnectionManager::removeConnection(const std::string& userId)
{
    std::lock_guard<std::mutex> lock(mutex_);
    userConnections.erase(userId);
}

my_bev* ConnectionManager::getConnection(const std::string& userId)
{
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = userConnections.find(userId);
    if (it != userConnections.end())
    {
        return it->second;
    }
    return nullptr;
}

bool ConnectionManager::isUserOnline(const std::string& userId)
{
    std::lock_guard<std::mutex> lock(mutex_);
    return userConnections.find(userId) != userConnections.end();
}
