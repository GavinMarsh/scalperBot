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
 * OrderApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_OrderApi_H_
#define IO_SWAGGER_CLIENT_API_OrderApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Object.h"
#include "Order.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  OrderApi
{
public:
    OrderApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~OrderApi();
    /// <summary>
    /// Amend the quantity or price of an open order.
    /// </summary>
    /// <remarks>
    /// Send an &#x60;orderID&#x60; or &#x60;origClOrdID&#x60; to identify the order you wish to amend.  Both order quantity and price can be amended. Only one &#x60;qty&#x60; field can be used to amend.  Use the &#x60;leavesQty&#x60; field to specify how much of the order you wish to remain open. This can be useful if you want to adjust your position&#39;s delta by a certain amount, regardless of how much of the order has already filled.  &gt; A &#x60;leavesQty&#x60; can be used to make a \&quot;Filled\&quot; order live again, if it is received within 60 seconds of the fill.  Like order placement, amending can be done in bulk. Simply send a request to &#x60;PUT /api/v1/order/bulk&#x60; with a JSON body of the shape: &#x60;{\&quot;orders\&quot;: [{...}, {...}]}&#x60;, each object containing the fields used in this endpoint. 
    /// </remarks>
    /// <param name="orderID">Order ID (optional)</param>
    /// <param name="origClOrdID">Client Order ID. See POST /order. (optional)</param>
    /// <param name="clOrdID">Optional new Client Order ID, requires &#x60;origClOrdID&#x60;. (optional)</param>
    /// <param name="simpleOrderQty">Deprecated: simple orders are not supported after 2018/10/26 (optional)</param>
    /// <param name="orderQty">Optional order quantity in units of the instrument (i.e. contracts). (optional)</param>
    /// <param name="simpleLeavesQty">Deprecated: simple orders are not supported after 2018/10/26 (optional)</param>
    /// <param name="leavesQty">Optional leaves quantity in units of the instrument (i.e. contracts). Useful for amending partially filled orders. (optional)</param>
    /// <param name="price">Optional limit price for &#39;Limit&#39;, &#39;StopLimit&#39;, and &#39;LimitIfTouched&#39; orders. (optional)</param>
    /// <param name="stopPx">Optional trigger price for &#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, and &#39;LimitIfTouched&#39; orders. Use a price below the current price for stop-sell orders and buy-if-touched orders. (optional)</param>
    /// <param name="pegOffsetValue">Optional trailing offset from the current price for &#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, and &#39;LimitIfTouched&#39; orders; use a negative offset for stop-sell orders and buy-if-touched orders. Optional offset from the peg price for &#39;Pegged&#39; orders. (optional)</param>
    /// <param name="text">Optional amend annotation. e.g. &#39;Adjust skew&#39;. (optional)</param>
    pplx::task<std::shared_ptr<Order>> order_amend(
        boost::optional<utility::string_t> orderID,
        boost::optional<utility::string_t> origClOrdID,
        boost::optional<utility::string_t> clOrdID,
        boost::optional<double> simpleOrderQty,
        boost::optional<double> orderQty,
        boost::optional<double> simpleLeavesQty,
        boost::optional<double> leavesQty,
        boost::optional<double> price,
        boost::optional<double> stopPx,
        boost::optional<double> pegOffsetValue,
        boost::optional<utility::string_t> text
    );
    /// <summary>
    /// Amend multiple orders for the same symbol.
    /// </summary>
    /// <remarks>
    /// Similar to POST /amend, but with multiple orders. &#x60;application/json&#x60; only. Ratelimited at 10%.
    /// </remarks>
    /// <param name="orders">An array of orders. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Order>>> order_amendBulk(
        boost::optional<utility::string_t> orders
    );
    /// <summary>
    /// Cancel order(s). Send multiple order IDs to cancel in bulk.
    /// </summary>
    /// <remarks>
    /// Either an orderID or a clOrdID must be provided.
    /// </remarks>
    /// <param name="orderID">Order ID(s). (optional)</param>
    /// <param name="clOrdID">Client Order ID(s). See POST /order. (optional)</param>
    /// <param name="text">Optional cancellation annotation. e.g. &#39;Spread Exceeded&#39;. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Order>>> order_cancel(
        boost::optional<utility::string_t> orderID,
        boost::optional<utility::string_t> clOrdID,
        boost::optional<utility::string_t> text
    );
    /// <summary>
    /// Cancels all of your orders.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="symbol">Optional symbol. If provided, only cancels orders for that symbol. (optional)</param>
    /// <param name="filter">Optional filter for cancellation. Use to only cancel some orders, e.g. &#x60;{\&quot;side\&quot;: \&quot;Buy\&quot;}&#x60;. (optional)</param>
    /// <param name="text">Optional cancellation annotation. e.g. &#39;Spread Exceeded&#39; (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Order>>> order_cancelAll(
        boost::optional<utility::string_t> symbol,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> text
    );
    /// <summary>
    /// Automatically cancel all your orders after a specified timeout.
    /// </summary>
    /// <remarks>
    /// Useful as a dead-man&#39;s switch to ensure your orders are canceled in case of an outage. If called repeatedly, the existing offset will be canceled and a new one will be inserted in its place.  Example usage: call this route at 15s intervals with an offset of 60000 (60s). If this route is not called within 60 seconds, all your orders will be automatically canceled.  This is also available via [WebSocket](https://www.bitmex.com/app/wsAPI#Dead-Mans-Switch-Auto-Cancel). 
    /// </remarks>
    /// <param name="timeout">Timeout in ms. Set to 0 to cancel this timer. </param>
    pplx::task<std::shared_ptr<Object>> order_cancelAllAfter(
        double timeout
    );
    /// <summary>
    /// Close a position. [Deprecated, use POST /order with execInst: &#39;Close&#39;]
    /// </summary>
    /// <remarks>
    /// If no &#x60;price&#x60; is specified, a market order will be submitted to close the whole of your position. This will also close all other open orders in this symbol.
    /// </remarks>
    /// <param name="symbol">Symbol of position to close.</param>
    /// <param name="price">Optional limit price. (optional)</param>
    pplx::task<std::shared_ptr<Order>> order_closePosition(
        utility::string_t symbol,
        boost::optional<double> price
    );
    /// <summary>
    /// Get your orders.
    /// </summary>
    /// <remarks>
    /// To get open orders only, send {\&quot;open\&quot;: true} in the filter param.  See &lt;a href&#x3D;\&quot;http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_D_68.html\&quot;&gt;the FIX Spec&lt;/a&gt; for explanations of these fields.
    /// </remarks>
    /// <param name="symbol">Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)</param>
    /// <param name="filter">Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)</param>
    /// <param name="columns">Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)</param>
    /// <param name="count">Number of results to fetch. (optional, default to 100)</param>
    /// <param name="start">Starting point for results. (optional, default to 0)</param>
    /// <param name="reverse">If true, will sort results newest first. (optional, default to false)</param>
    /// <param name="startTime">Starting date filter for results. (optional)</param>
    /// <param name="endTime">Ending date filter for results. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Order>>> order_getOrders(
        boost::optional<utility::string_t> symbol,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> columns,
        boost::optional<double> count,
        boost::optional<double> start,
        boost::optional<bool> reverse,
        boost::optional<utility::datetime> startTime,
        boost::optional<utility::datetime> endTime
    );
    /// <summary>
    /// Create a new order.
    /// </summary>
    /// <remarks>
    /// ## Placing Orders  This endpoint is used for placing orders. See individual fields below for more details on their use.  #### Order Types  All orders require a &#x60;symbol&#x60;. All other fields are optional except when otherwise specified.  These are the valid &#x60;ordType&#x60;s:  - **Limit**: The default order type. Specify an &#x60;orderQty&#x60; and &#x60;price&#x60;. - **Market**: A traditional Market order. A Market order will execute until filled or your bankruptcy price is reached, at   which point it will cancel. - **Stop**: A Stop Market order. Specify an &#x60;orderQty&#x60; and &#x60;stopPx&#x60;. When the &#x60;stopPx&#x60; is reached, the order will be entered   into the book.   - On sell orders, the order will trigger if the triggering price is lower than the &#x60;stopPx&#x60;. On buys, higher.   - Note: Stop orders do not consume margin until triggered. Be sure that the required margin is available in your     account so that it may trigger fully.   - &#x60;Close&#x60; Stops don&#39;t require an &#x60;orderQty&#x60;. See Execution Instructions below. - **StopLimit**: Like a Stop Market, but enters a Limit order instead of a Market order. Specify an &#x60;orderQty&#x60;, &#x60;stopPx&#x60;,   and &#x60;price&#x60;. - **MarketIfTouched**: Similar to a Stop, but triggers are done in the opposite direction. Useful for Take Profit orders. - **LimitIfTouched**: As above; use for Take Profit Limit orders.  #### Execution Instructions  The following &#x60;execInst&#x60;s are supported. If using multiple, separate with a comma (e.g. &#x60;LastPrice,Close&#x60;).  - **ParticipateDoNotInitiate**: Also known as a Post-Only order. If this order would have executed on placement,   it will cancel instead. - **MarkPrice, LastPrice, IndexPrice**: Used by stop and if-touched orders to determine the triggering price.   Use only one. By default, &#x60;&#39;MarkPrice&#39;&#x60; is used. Also used for Pegged orders to define the value of &#x60;&#39;LastPeg&#39;&#x60;. - **ReduceOnly**: A &#x60;&#39;ReduceOnly&#39;&#x60; order can only reduce your position, not increase it. If you have a &#x60;&#39;ReduceOnly&#39;&#x60;   limit order that rests in the order book while the position is reduced by other orders, then its order quantity will   be amended down or canceled. If there are multiple &#x60;&#39;ReduceOnly&#39;&#x60; orders the least aggressive will be amended first. - **Close**: &#x60;&#39;Close&#39;&#x60; implies &#x60;&#39;ReduceOnly&#39;&#x60;. A &#x60;&#39;Close&#39;&#x60; order will cancel other active limit orders with the same side   and symbol if the open quantity exceeds the current position. This is useful for stops: by canceling these orders, a   &#x60;&#39;Close&#39;&#x60; Stop is ensured to have the margin required to execute, and can only execute up to the full size of your   position. If &#x60;orderQty&#x60; is not specified, a &#x60;&#39;Close&#39;&#x60; order has an &#x60;orderQty&#x60; equal to your current position&#39;s size.   - Note that a &#x60;Close&#x60; order without an &#x60;orderQty&#x60; requires a &#x60;side&#x60;, so that BitMEX knows if it should trigger     above or below the &#x60;stopPx&#x60;.  #### Linked Orders  [Linked Orders are deprecated as of 2018/11/10](https://blog.bitmex.com/api_announcement/deprecation-of-contingent-orders/)  #### Trailing Stops  You may use &#x60;pegPriceType&#x60; of &#x60;&#39;TrailingStopPeg&#39;&#x60; to create Trailing Stops. The pegged &#x60;stopPx&#x60; will move as the market moves away from the peg, and freeze as the market moves toward it.  To use, combine with &#x60;pegOffsetValue&#x60; to set the &#x60;stopPx&#x60; of your order. The peg is set to the triggering price specified in the &#x60;execInst&#x60; (default &#x60;&#39;MarkPrice&#39;&#x60;). Use a negative offset for stop-sell and buy-if-touched orders.  Requires &#x60;ordType&#x60;: &#x60;&#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, &#39;LimitIfTouched&#39;&#x60;.  #### Simple Quantities  [Simple Quantities are deprecated as of 2018/10/26](https://blog.bitmex.com/api_announcement/deprecation-of-simpleorderqty-functionality/)  #### Rate Limits  See the [Bulk Order Documentation](#!/Order/Order_newBulk) if you need to place multiple orders at the same time. Bulk orders require fewer risk checks in the trading engine and thus are ratelimited at **1/10** the normal rate.  You can also improve your reactivity to market movements while staying under your ratelimit by using the [Amend](#!/Order/Order_amend) and [Amend Bulk](#!/Order/Order_amendBulk) endpoints. This allows you to stay in the market and avoids the cancel/replace cycle.  #### Tracking Your Orders  If you want to keep track of order IDs yourself, set a unique &#x60;clOrdID&#x60; per order. This &#x60;clOrdID&#x60; will come back as a property on the order and any related executions (including on the WebSocket), and can be used to get or cancel the order. Max length is 36 characters.  You can also change the &#x60;clOrdID&#x60; by amending an order, supplying an &#x60;origClOrdID&#x60;, and your desired new ID as the &#x60;clOrdID&#x60; param, like so:  &#x60;&#x60;&#x60; # Amends an order&#39;s leavesQty, and updates its clOrdID to \&quot;def-456\&quot; PUT /api/v1/order {\&quot;origClOrdID\&quot;: \&quot;abc-123\&quot;, \&quot;clOrdID\&quot;: \&quot;def-456\&quot;, \&quot;leavesQty\&quot;: 1000} &#x60;&#x60;&#x60; 
    /// </remarks>
    /// <param name="symbol">Instrument symbol. e.g. &#39;XBTUSD&#39;.</param>
    /// <param name="side">Order side. Valid options: Buy, Sell. Defaults to &#39;Buy&#39; unless &#x60;orderQty&#x60; is negative. (optional)</param>
    /// <param name="simpleOrderQty">Deprecated: simple orders are not supported after 2018/10/26 (optional)</param>
    /// <param name="orderQty">Order quantity in units of the instrument (i.e. contracts). (optional)</param>
    /// <param name="price">Optional limit price for &#39;Limit&#39;, &#39;StopLimit&#39;, and &#39;LimitIfTouched&#39; orders. (optional)</param>
    /// <param name="displayQty">Optional quantity to display in the book. Use 0 for a fully hidden order. (optional)</param>
    /// <param name="stopPx">Optional trigger price for &#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, and &#39;LimitIfTouched&#39; orders. Use a price below the current price for stop-sell orders and buy-if-touched orders. Use &#x60;execInst&#x60; of &#39;MarkPrice&#39; or &#39;LastPrice&#39; to define the current price used for triggering. (optional)</param>
    /// <param name="clOrdID">Optional Client Order ID. This clOrdID will come back on the order and any related executions. (optional)</param>
    /// <param name="clOrdLinkID">Deprecated: linked orders are not supported after 2018/11/10. (optional)</param>
    /// <param name="pegOffsetValue">Optional trailing offset from the current price for &#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, and &#39;LimitIfTouched&#39; orders; use a negative offset for stop-sell orders and buy-if-touched orders. Optional offset from the peg price for &#39;Pegged&#39; orders. (optional)</param>
    /// <param name="pegPriceType">Optional peg price type. Valid options: LastPeg, MidPricePeg, MarketPeg, PrimaryPeg, TrailingStopPeg. (optional)</param>
    /// <param name="ordType">Order type. Valid options: Market, Limit, Stop, StopLimit, MarketIfTouched, LimitIfTouched, Pegged. Defaults to &#39;Limit&#39; when &#x60;price&#x60; is specified. Defaults to &#39;Stop&#39; when &#x60;stopPx&#x60; is specified. Defaults to &#39;StopLimit&#39; when &#x60;price&#x60; and &#x60;stopPx&#x60; are specified. (optional, default to Limit)</param>
    /// <param name="timeInForce">Time in force. Valid options: Day, GoodTillCancel, ImmediateOrCancel, FillOrKill. Defaults to &#39;GoodTillCancel&#39; for &#39;Limit&#39;, &#39;StopLimit&#39;, and &#39;LimitIfTouched&#39; orders. (optional)</param>
    /// <param name="execInst">Optional execution instructions. Valid options: ParticipateDoNotInitiate, AllOrNone, MarkPrice, IndexPrice, LastPrice, Close, ReduceOnly, Fixed. &#39;AllOrNone&#39; instruction requires &#x60;displayQty&#x60; to be 0. &#39;MarkPrice&#39;, &#39;IndexPrice&#39; or &#39;LastPrice&#39; instruction valid for &#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, and &#39;LimitIfTouched&#39; orders. (optional)</param>
    /// <param name="contingencyType">Deprecated: linked orders are not supported after 2018/11/10. (optional)</param>
    /// <param name="text">Optional order annotation. e.g. &#39;Take profit&#39;. (optional)</param>
    pplx::task<std::shared_ptr<Order>> order_new(
        utility::string_t symbol,
        boost::optional<utility::string_t> side,
        boost::optional<double> simpleOrderQty,
        boost::optional<double> orderQty,
        boost::optional<double> price,
        boost::optional<double> displayQty,
        boost::optional<double> stopPx,
        boost::optional<utility::string_t> clOrdID,
        boost::optional<utility::string_t> clOrdLinkID,
        boost::optional<double> pegOffsetValue,
        boost::optional<utility::string_t> pegPriceType,
        boost::optional<utility::string_t> ordType,
        boost::optional<utility::string_t> timeInForce,
        boost::optional<utility::string_t> execInst,
        boost::optional<utility::string_t> contingencyType,
        boost::optional<utility::string_t> text
    );
    /// <summary>
    /// Create multiple new orders for the same symbol.
    /// </summary>
    /// <remarks>
    /// This endpoint is used for placing bulk orders. Valid order types are Market, Limit, Stop, StopLimit, MarketIfTouched, LimitIfTouched, and Pegged.  Each individual order object in the array should have the same properties as an individual POST /order call.  This endpoint is much faster for getting many orders into the book at once. Because it reduces load on BitMEX systems, this endpoint is ratelimited at &#x60;ceil(0.1 * orders)&#x60;. Submitting 10 orders via a bulk order call will only count as 1 request, 15 as 2, 32 as 4, and so on.  For now, only &#x60;application/json&#x60; is supported on this endpoint. 
    /// </remarks>
    /// <param name="orders">An array of orders. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Order>>> order_newBulk(
        boost::optional<utility::string_t> orders
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_OrderApi_H_ */
