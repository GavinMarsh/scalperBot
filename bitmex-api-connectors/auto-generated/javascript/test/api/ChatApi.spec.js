/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.11-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BitMexApi);
  }
}(this, function(expect, BitMexApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new BitMexApi.ChatApi();
  });

  describe('(package)', function() {
    describe('ChatApi', function() {
      describe('chatGet', function() {
        it('should call chatGet successfully', function(done) {
          // TODO: uncomment, update parameter values for chatGet call and complete the assertions
          /*
          var opts = {};
          opts.count = 100;
          opts.start = 0;
          opts.reverse = true;
          opts.channelID = 1.2;

          instance.chatGet(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(BitMexApi.Chat);
              expect(data.id).to.be.a('number');
              expect(data.id).to.be();
              expect(data._date).to.be.a(Date);
              expect(data._date).to.be(new Date());
              expect(data.user).to.be.a('string');
              expect(data.user).to.be("");
              expect(data.message).to.be.a('string');
              expect(data.message).to.be("");
              expect(data.html).to.be.a('string');
              expect(data.html).to.be("");
              expect(data.fromBot).to.be.a('boolean');
              expect(data.fromBot).to.be(false);
              expect(data.channelID).to.be.a('number');
              expect(data.channelID).to.be(0.0);
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('chatGetChannels', function() {
        it('should call chatGetChannels successfully', function(done) {
          // TODO: uncomment chatGetChannels call and complete the assertions
          /*

          instance.chatGetChannels(function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(BitMexApi.ChatChannel);
              expect(data.id).to.be.a('number');
              expect(data.id).to.be();
              expect(data.name).to.be.a('string');
              expect(data.name).to.be("");
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('chatGetConnected', function() {
        it('should call chatGetConnected successfully', function(done) {
          // TODO: uncomment chatGetConnected call and complete the assertions
          /*

          instance.chatGetConnected(function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(BitMexApi.ConnectedUsers);
            expect(data.users).to.be.a('number');
            expect(data.users).to.be();
            expect(data.bots).to.be.a('number');
            expect(data.bots).to.be();

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('chatNew', function() {
        it('should call chatNew successfully', function(done) {
          // TODO: uncomment, update parameter values for chatNew call and complete the assertions
          /*
          var message = "message_example";
          var opts = {};
          opts.channelID = 1;

          instance.chatNew(message, opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(BitMexApi.Chat);
            expect(data.id).to.be.a('number');
            expect(data.id).to.be();
            expect(data._date).to.be.a(Date);
            expect(data._date).to.be(new Date());
            expect(data.user).to.be.a('string');
            expect(data.user).to.be("");
            expect(data.message).to.be.a('string');
            expect(data.message).to.be("");
            expect(data.html).to.be.a('string');
            expect(data.html).to.be("");
            expect(data.fromBot).to.be.a('boolean');
            expect(data.fromBot).to.be(false);
            expect(data.channelID).to.be.a('number');
            expect(data.channelID).to.be(0.0);

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
    });
  });

}));