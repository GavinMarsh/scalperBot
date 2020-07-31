/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.11-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * LeaderboardApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_LeaderboardApi_H_
#define IO_SWAGGER_CLIENT_API_LeaderboardApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Inline_response_200.h"
#include "Leaderboard.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  LeaderboardApi
{
public:
    LeaderboardApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~LeaderboardApi();
    /// <summary>
    /// Get current leaderboard.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="method">Ranking type. Options: \&quot;notional\&quot;, \&quot;ROE\&quot; (optional, default to notional)</param>
    pplx::task<std::vector<std::shared_ptr<Leaderboard>>> leaderboard_get(
        boost::optional<utility::string_t> method
    );
    /// <summary>
    /// Get your alias on the leaderboard.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Inline_response_200>> leaderboard_getName(
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_LeaderboardApi_H_ */

