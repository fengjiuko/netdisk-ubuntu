#ifndef _CONNECTION_MANAGER_H_
#define _CONNECTION_MANAGER_H_

#include <unordered_map>
#include <string>
#include <mutex>
#include <memory>

// 前向声明
struct my_bev;

/// @brief 连接管理器，用于管理在线用户的连接
class ConnectionManager
{
public:
    static ConnectionManager& getInstance();
    
    /// @brief 添加用户连接
    /// @param userId 用户ID
    /// @param mbev 用户连接对象
    void addConnection(const std::string& userId, my_bev* mbev);
    
    /// @brief 移除用户连接
    /// @param userId 用户ID
    void removeConnection(const std::string& userId);
    
    /// @brief 获取用户连接
    /// @param userId 用户ID
    /// @return 用户连接对象指针，如果用户不在线返回nullptr
    my_bev* getConnection(const std::string& userId);
    
    /// @brief 检查用户是否在线
    /// @param userId 用户ID
    /// @return 用户是否在线
    bool isUserOnline(const std::string& userId);
    
private:
    ConnectionManager() = default;
    ~ConnectionManager() = default;
    ConnectionManager(const ConnectionManager&) = delete;
    ConnectionManager& operator=(const ConnectionManager&) = delete;
    
    std::unordered_map<std::string, my_bev*> userConnections;
    std::mutex mutex_;
};

#endif
