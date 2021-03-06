/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#include "api/bridgechains/bridgechains.h"

namespace Ark {
namespace Client {
namespace api {

std::string Bridgechains::get(const char* bridgechainId) {
  return http_->get(paths::Bridgechains::get(this->host_, bridgechainId).c_str());
}

/**/

std::string Bridgechains::all(const char* const query) {
  return http_->get(paths::Bridgechains::all(this->host_, query).c_str());
}

/**/

std::string Bridgechains::search(
    const std::map<std::string, std::string> &bodyParameters,
    const char* const query) {
  const auto searchPathPair = paths::Bridgechains::search(this->host_,
                                                     bodyParameters,
                                                     query);
  return http_->post(searchPathPair.first.c_str(),
                     searchPathPair.second.c_str());
}

}  // namespace api
}  // namespace Client
}  // namespace Ark
