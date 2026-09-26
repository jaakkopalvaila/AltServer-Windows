#include "DevicePairingManager.h"

#include "ServerError.hpp"

DevicePairingManager* DevicePairingManager::instance()
{
	static DevicePairingManager instance;
	return &instance;
}

std::vector<unsigned char> DevicePairingManager::GeneratePairingFile(std::string udid, std::string hostName)
{
	throw ServerError(ServerErrorCode::UnknownRequest);
}
