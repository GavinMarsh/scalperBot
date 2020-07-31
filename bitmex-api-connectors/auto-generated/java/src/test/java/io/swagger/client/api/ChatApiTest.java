/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.api;

import io.swagger.client.ApiException;
import java.math.BigDecimal;
import io.swagger.client.model.Chat;
import io.swagger.client.model.ChatChannel;
import io.swagger.client.model.ConnectedUsers;
import io.swagger.client.model.Error;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ChatApi
 */
@Ignore
public class ChatApiTest {

    private final ChatApi api = new ChatApi();

    
    /**
     * Get chat messages.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void chatGetTest() throws ApiException {
        BigDecimal count = null;
        BigDecimal start = null;
        Boolean reverse = null;
        Double channelID = null;
        List<Chat> response = api.chatGet(count, start, reverse, channelID);

        // TODO: test validations
    }
    
    /**
     * Get available channels.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void chatGetChannelsTest() throws ApiException {
        List<ChatChannel> response = api.chatGetChannels();

        // TODO: test validations
    }
    
    /**
     * Get connected users.
     *
     * Returns an array with browser users in the first position and API users (bots) in the second position.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void chatGetConnectedTest() throws ApiException {
        ConnectedUsers response = api.chatGetConnected();

        // TODO: test validations
    }
    
    /**
     * Send a chat message.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void chatNewTest() throws ApiException {
        String message = null;
        Double channelID = null;
        Chat response = api.chatNew(message, channelID);

        // TODO: test validations
    }
    
}