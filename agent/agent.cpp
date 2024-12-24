//agent.cpp
#include "agent.h"
#include <cstdlib>  // 包含 C++ 标准库的 std::getenv
#include "/usr/include/stdlib.h"
#include <iostream>
#include <filesystem>
#include <spdlog/spdlog.h>
#include <sys/prctl.h>
#include "struct/agent_Struct.h"
#include <netinet/in.h>  // For inet_pton()
#include <arpa/inet.h>   // For inet_ntoa
#include <netinet/ip.h>  // For netmask and IP calculation
#include <fstream>
#include <string>
#include <stdexcept>
#include <boost/asio.hpp>  // For context and IO services
#include <boost/bind.hpp>


// 声明函数
void new_agent_command(boost::program_options::variables_map& vm){
    // 代理启动逻辑
    spdlog::info("Agent is running...");
    // 将进程的标题设置为k3s server，隐藏敏感参数
    prctl(PR_SET_NAME, "k3s agent", 0, 0, 0);
    // 初始化日志系统1
    spdlog::info("Initializing logging system...");

    
};