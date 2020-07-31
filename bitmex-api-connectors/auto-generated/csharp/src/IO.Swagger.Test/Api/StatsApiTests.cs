/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing StatsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class StatsApiTests
    {
        private StatsApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new StatsApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of StatsApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' StatsApi
            //Assert.IsInstanceOfType(typeof(StatsApi), instance, "instance is a StatsApi");
        }

        
        /// <summary>
        /// Test StatsGet
        /// </summary>
        [Test]
        public void StatsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.StatsGet();
            //Assert.IsInstanceOf<List<Stats>> (response, "response is List<Stats>");
        }
        
        /// <summary>
        /// Test StatsHistory
        /// </summary>
        [Test]
        public void StatsHistoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.StatsHistory();
            //Assert.IsInstanceOf<List<StatsHistory>> (response, "response is List<StatsHistory>");
        }
        
        /// <summary>
        /// Test StatsHistoryUSD
        /// </summary>
        [Test]
        public void StatsHistoryUSDTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.StatsHistoryUSD();
            //Assert.IsInstanceOf<List<StatsUSD>> (response, "response is List<StatsUSD>");
        }
        
    }

}