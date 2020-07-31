=begin
#BitMEX API

### REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 

OpenAPI spec version: 1.2.0
Contact: support@bitmex.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.11-SNAPSHOT

=end

require 'date'

module SwaggerClient
  # Tradeable Contracts, Indices, and History
  class Instrument
    attr_accessor :symbol

    attr_accessor :root_symbol

    attr_accessor :state

    attr_accessor :typ

    attr_accessor :listing

    attr_accessor :front

    attr_accessor :expiry

    attr_accessor :settle

    attr_accessor :relist_interval

    attr_accessor :inverse_leg

    attr_accessor :sell_leg

    attr_accessor :buy_leg

    attr_accessor :option_strike_pcnt

    attr_accessor :option_strike_round

    attr_accessor :option_strike_price

    attr_accessor :option_multiplier

    attr_accessor :position_currency

    attr_accessor :underlying

    attr_accessor :quote_currency

    attr_accessor :underlying_symbol

    attr_accessor :reference

    attr_accessor :reference_symbol

    attr_accessor :calc_interval

    attr_accessor :publish_interval

    attr_accessor :publish_time

    attr_accessor :max_order_qty

    attr_accessor :max_price

    attr_accessor :lot_size

    attr_accessor :tick_size

    attr_accessor :multiplier

    attr_accessor :settl_currency

    attr_accessor :underlying_to_position_multiplier

    attr_accessor :underlying_to_settle_multiplier

    attr_accessor :quote_to_settle_multiplier

    attr_accessor :is_quanto

    attr_accessor :is_inverse

    attr_accessor :init_margin

    attr_accessor :maint_margin

    attr_accessor :risk_limit

    attr_accessor :risk_step

    attr_accessor :limit

    attr_accessor :capped

    attr_accessor :taxed

    attr_accessor :deleverage

    attr_accessor :maker_fee

    attr_accessor :taker_fee

    attr_accessor :settlement_fee

    attr_accessor :insurance_fee

    attr_accessor :funding_base_symbol

    attr_accessor :funding_quote_symbol

    attr_accessor :funding_premium_symbol

    attr_accessor :funding_timestamp

    attr_accessor :funding_interval

    attr_accessor :funding_rate

    attr_accessor :indicative_funding_rate

    attr_accessor :rebalance_timestamp

    attr_accessor :rebalance_interval

    attr_accessor :opening_timestamp

    attr_accessor :closing_timestamp

    attr_accessor :session_interval

    attr_accessor :prev_close_price

    attr_accessor :limit_down_price

    attr_accessor :limit_up_price

    attr_accessor :bankrupt_limit_down_price

    attr_accessor :bankrupt_limit_up_price

    attr_accessor :prev_total_volume

    attr_accessor :total_volume

    attr_accessor :volume

    attr_accessor :volume24h

    attr_accessor :prev_total_turnover

    attr_accessor :total_turnover

    attr_accessor :turnover

    attr_accessor :turnover24h

    attr_accessor :home_notional24h

    attr_accessor :foreign_notional24h

    attr_accessor :prev_price24h

    attr_accessor :vwap

    attr_accessor :high_price

    attr_accessor :low_price

    attr_accessor :last_price

    attr_accessor :last_price_protected

    attr_accessor :last_tick_direction

    attr_accessor :last_change_pcnt

    attr_accessor :bid_price

    attr_accessor :mid_price

    attr_accessor :ask_price

    attr_accessor :impact_bid_price

    attr_accessor :impact_mid_price

    attr_accessor :impact_ask_price

    attr_accessor :has_liquidity

    attr_accessor :open_interest

    attr_accessor :open_value

    attr_accessor :fair_method

    attr_accessor :fair_basis_rate

    attr_accessor :fair_basis

    attr_accessor :fair_price

    attr_accessor :mark_method

    attr_accessor :mark_price

    attr_accessor :indicative_tax_rate

    attr_accessor :indicative_settle_price

    attr_accessor :option_underlying_price

    attr_accessor :settled_price

    attr_accessor :timestamp

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'symbol' => :'symbol',
        :'root_symbol' => :'rootSymbol',
        :'state' => :'state',
        :'typ' => :'typ',
        :'listing' => :'listing',
        :'front' => :'front',
        :'expiry' => :'expiry',
        :'settle' => :'settle',
        :'relist_interval' => :'relistInterval',
        :'inverse_leg' => :'inverseLeg',
        :'sell_leg' => :'sellLeg',
        :'buy_leg' => :'buyLeg',
        :'option_strike_pcnt' => :'optionStrikePcnt',
        :'option_strike_round' => :'optionStrikeRound',
        :'option_strike_price' => :'optionStrikePrice',
        :'option_multiplier' => :'optionMultiplier',
        :'position_currency' => :'positionCurrency',
        :'underlying' => :'underlying',
        :'quote_currency' => :'quoteCurrency',
        :'underlying_symbol' => :'underlyingSymbol',
        :'reference' => :'reference',
        :'reference_symbol' => :'referenceSymbol',
        :'calc_interval' => :'calcInterval',
        :'publish_interval' => :'publishInterval',
        :'publish_time' => :'publishTime',
        :'max_order_qty' => :'maxOrderQty',
        :'max_price' => :'maxPrice',
        :'lot_size' => :'lotSize',
        :'tick_size' => :'tickSize',
        :'multiplier' => :'multiplier',
        :'settl_currency' => :'settlCurrency',
        :'underlying_to_position_multiplier' => :'underlyingToPositionMultiplier',
        :'underlying_to_settle_multiplier' => :'underlyingToSettleMultiplier',
        :'quote_to_settle_multiplier' => :'quoteToSettleMultiplier',
        :'is_quanto' => :'isQuanto',
        :'is_inverse' => :'isInverse',
        :'init_margin' => :'initMargin',
        :'maint_margin' => :'maintMargin',
        :'risk_limit' => :'riskLimit',
        :'risk_step' => :'riskStep',
        :'limit' => :'limit',
        :'capped' => :'capped',
        :'taxed' => :'taxed',
        :'deleverage' => :'deleverage',
        :'maker_fee' => :'makerFee',
        :'taker_fee' => :'takerFee',
        :'settlement_fee' => :'settlementFee',
        :'insurance_fee' => :'insuranceFee',
        :'funding_base_symbol' => :'fundingBaseSymbol',
        :'funding_quote_symbol' => :'fundingQuoteSymbol',
        :'funding_premium_symbol' => :'fundingPremiumSymbol',
        :'funding_timestamp' => :'fundingTimestamp',
        :'funding_interval' => :'fundingInterval',
        :'funding_rate' => :'fundingRate',
        :'indicative_funding_rate' => :'indicativeFundingRate',
        :'rebalance_timestamp' => :'rebalanceTimestamp',
        :'rebalance_interval' => :'rebalanceInterval',
        :'opening_timestamp' => :'openingTimestamp',
        :'closing_timestamp' => :'closingTimestamp',
        :'session_interval' => :'sessionInterval',
        :'prev_close_price' => :'prevClosePrice',
        :'limit_down_price' => :'limitDownPrice',
        :'limit_up_price' => :'limitUpPrice',
        :'bankrupt_limit_down_price' => :'bankruptLimitDownPrice',
        :'bankrupt_limit_up_price' => :'bankruptLimitUpPrice',
        :'prev_total_volume' => :'prevTotalVolume',
        :'total_volume' => :'totalVolume',
        :'volume' => :'volume',
        :'volume24h' => :'volume24h',
        :'prev_total_turnover' => :'prevTotalTurnover',
        :'total_turnover' => :'totalTurnover',
        :'turnover' => :'turnover',
        :'turnover24h' => :'turnover24h',
        :'home_notional24h' => :'homeNotional24h',
        :'foreign_notional24h' => :'foreignNotional24h',
        :'prev_price24h' => :'prevPrice24h',
        :'vwap' => :'vwap',
        :'high_price' => :'highPrice',
        :'low_price' => :'lowPrice',
        :'last_price' => :'lastPrice',
        :'last_price_protected' => :'lastPriceProtected',
        :'last_tick_direction' => :'lastTickDirection',
        :'last_change_pcnt' => :'lastChangePcnt',
        :'bid_price' => :'bidPrice',
        :'mid_price' => :'midPrice',
        :'ask_price' => :'askPrice',
        :'impact_bid_price' => :'impactBidPrice',
        :'impact_mid_price' => :'impactMidPrice',
        :'impact_ask_price' => :'impactAskPrice',
        :'has_liquidity' => :'hasLiquidity',
        :'open_interest' => :'openInterest',
        :'open_value' => :'openValue',
        :'fair_method' => :'fairMethod',
        :'fair_basis_rate' => :'fairBasisRate',
        :'fair_basis' => :'fairBasis',
        :'fair_price' => :'fairPrice',
        :'mark_method' => :'markMethod',
        :'mark_price' => :'markPrice',
        :'indicative_tax_rate' => :'indicativeTaxRate',
        :'indicative_settle_price' => :'indicativeSettlePrice',
        :'option_underlying_price' => :'optionUnderlyingPrice',
        :'settled_price' => :'settledPrice',
        :'timestamp' => :'timestamp'
      }
    end

    # Attribute type mapping.
    def self.swagger_types
      {
        :'symbol' => :'String',
        :'root_symbol' => :'String',
        :'state' => :'String',
        :'typ' => :'String',
        :'listing' => :'DateTime',
        :'front' => :'DateTime',
        :'expiry' => :'DateTime',
        :'settle' => :'DateTime',
        :'relist_interval' => :'DateTime',
        :'inverse_leg' => :'String',
        :'sell_leg' => :'String',
        :'buy_leg' => :'String',
        :'option_strike_pcnt' => :'Float',
        :'option_strike_round' => :'Float',
        :'option_strike_price' => :'Float',
        :'option_multiplier' => :'Float',
        :'position_currency' => :'String',
        :'underlying' => :'String',
        :'quote_currency' => :'String',
        :'underlying_symbol' => :'String',
        :'reference' => :'String',
        :'reference_symbol' => :'String',
        :'calc_interval' => :'DateTime',
        :'publish_interval' => :'DateTime',
        :'publish_time' => :'DateTime',
        :'max_order_qty' => :'Float',
        :'max_price' => :'Float',
        :'lot_size' => :'Float',
        :'tick_size' => :'Float',
        :'multiplier' => :'Float',
        :'settl_currency' => :'String',
        :'underlying_to_position_multiplier' => :'Float',
        :'underlying_to_settle_multiplier' => :'Float',
        :'quote_to_settle_multiplier' => :'Float',
        :'is_quanto' => :'BOOLEAN',
        :'is_inverse' => :'BOOLEAN',
        :'init_margin' => :'Float',
        :'maint_margin' => :'Float',
        :'risk_limit' => :'Float',
        :'risk_step' => :'Float',
        :'limit' => :'Float',
        :'capped' => :'BOOLEAN',
        :'taxed' => :'BOOLEAN',
        :'deleverage' => :'BOOLEAN',
        :'maker_fee' => :'Float',
        :'taker_fee' => :'Float',
        :'settlement_fee' => :'Float',
        :'insurance_fee' => :'Float',
        :'funding_base_symbol' => :'String',
        :'funding_quote_symbol' => :'String',
        :'funding_premium_symbol' => :'String',
        :'funding_timestamp' => :'DateTime',
        :'funding_interval' => :'DateTime',
        :'funding_rate' => :'Float',
        :'indicative_funding_rate' => :'Float',
        :'rebalance_timestamp' => :'DateTime',
        :'rebalance_interval' => :'DateTime',
        :'opening_timestamp' => :'DateTime',
        :'closing_timestamp' => :'DateTime',
        :'session_interval' => :'DateTime',
        :'prev_close_price' => :'Float',
        :'limit_down_price' => :'Float',
        :'limit_up_price' => :'Float',
        :'bankrupt_limit_down_price' => :'Float',
        :'bankrupt_limit_up_price' => :'Float',
        :'prev_total_volume' => :'Float',
        :'total_volume' => :'Float',
        :'volume' => :'Float',
        :'volume24h' => :'Float',
        :'prev_total_turnover' => :'Float',
        :'total_turnover' => :'Float',
        :'turnover' => :'Float',
        :'turnover24h' => :'Float',
        :'home_notional24h' => :'Float',
        :'foreign_notional24h' => :'Float',
        :'prev_price24h' => :'Float',
        :'vwap' => :'Float',
        :'high_price' => :'Float',
        :'low_price' => :'Float',
        :'last_price' => :'Float',
        :'last_price_protected' => :'Float',
        :'last_tick_direction' => :'String',
        :'last_change_pcnt' => :'Float',
        :'bid_price' => :'Float',
        :'mid_price' => :'Float',
        :'ask_price' => :'Float',
        :'impact_bid_price' => :'Float',
        :'impact_mid_price' => :'Float',
        :'impact_ask_price' => :'Float',
        :'has_liquidity' => :'BOOLEAN',
        :'open_interest' => :'Float',
        :'open_value' => :'Float',
        :'fair_method' => :'String',
        :'fair_basis_rate' => :'Float',
        :'fair_basis' => :'Float',
        :'fair_price' => :'Float',
        :'mark_method' => :'String',
        :'mark_price' => :'Float',
        :'indicative_tax_rate' => :'Float',
        :'indicative_settle_price' => :'Float',
        :'option_underlying_price' => :'Float',
        :'settled_price' => :'Float',
        :'timestamp' => :'DateTime'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h| h[k.to_sym] = v }

      if attributes.has_key?(:'symbol')
        self.symbol = attributes[:'symbol']
      end

      if attributes.has_key?(:'rootSymbol')
        self.root_symbol = attributes[:'rootSymbol']
      end

      if attributes.has_key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.has_key?(:'typ')
        self.typ = attributes[:'typ']
      end

      if attributes.has_key?(:'listing')
        self.listing = attributes[:'listing']
      end

      if attributes.has_key?(:'front')
        self.front = attributes[:'front']
      end

      if attributes.has_key?(:'expiry')
        self.expiry = attributes[:'expiry']
      end

      if attributes.has_key?(:'settle')
        self.settle = attributes[:'settle']
      end

      if attributes.has_key?(:'relistInterval')
        self.relist_interval = attributes[:'relistInterval']
      end

      if attributes.has_key?(:'inverseLeg')
        self.inverse_leg = attributes[:'inverseLeg']
      end

      if attributes.has_key?(:'sellLeg')
        self.sell_leg = attributes[:'sellLeg']
      end

      if attributes.has_key?(:'buyLeg')
        self.buy_leg = attributes[:'buyLeg']
      end

      if attributes.has_key?(:'optionStrikePcnt')
        self.option_strike_pcnt = attributes[:'optionStrikePcnt']
      end

      if attributes.has_key?(:'optionStrikeRound')
        self.option_strike_round = attributes[:'optionStrikeRound']
      end

      if attributes.has_key?(:'optionStrikePrice')
        self.option_strike_price = attributes[:'optionStrikePrice']
      end

      if attributes.has_key?(:'optionMultiplier')
        self.option_multiplier = attributes[:'optionMultiplier']
      end

      if attributes.has_key?(:'positionCurrency')
        self.position_currency = attributes[:'positionCurrency']
      end

      if attributes.has_key?(:'underlying')
        self.underlying = attributes[:'underlying']
      end

      if attributes.has_key?(:'quoteCurrency')
        self.quote_currency = attributes[:'quoteCurrency']
      end

      if attributes.has_key?(:'underlyingSymbol')
        self.underlying_symbol = attributes[:'underlyingSymbol']
      end

      if attributes.has_key?(:'reference')
        self.reference = attributes[:'reference']
      end

      if attributes.has_key?(:'referenceSymbol')
        self.reference_symbol = attributes[:'referenceSymbol']
      end

      if attributes.has_key?(:'calcInterval')
        self.calc_interval = attributes[:'calcInterval']
      end

      if attributes.has_key?(:'publishInterval')
        self.publish_interval = attributes[:'publishInterval']
      end

      if attributes.has_key?(:'publishTime')
        self.publish_time = attributes[:'publishTime']
      end

      if attributes.has_key?(:'maxOrderQty')
        self.max_order_qty = attributes[:'maxOrderQty']
      end

      if attributes.has_key?(:'maxPrice')
        self.max_price = attributes[:'maxPrice']
      end

      if attributes.has_key?(:'lotSize')
        self.lot_size = attributes[:'lotSize']
      end

      if attributes.has_key?(:'tickSize')
        self.tick_size = attributes[:'tickSize']
      end

      if attributes.has_key?(:'multiplier')
        self.multiplier = attributes[:'multiplier']
      end

      if attributes.has_key?(:'settlCurrency')
        self.settl_currency = attributes[:'settlCurrency']
      end

      if attributes.has_key?(:'underlyingToPositionMultiplier')
        self.underlying_to_position_multiplier = attributes[:'underlyingToPositionMultiplier']
      end

      if attributes.has_key?(:'underlyingToSettleMultiplier')
        self.underlying_to_settle_multiplier = attributes[:'underlyingToSettleMultiplier']
      end

      if attributes.has_key?(:'quoteToSettleMultiplier')
        self.quote_to_settle_multiplier = attributes[:'quoteToSettleMultiplier']
      end

      if attributes.has_key?(:'isQuanto')
        self.is_quanto = attributes[:'isQuanto']
      end

      if attributes.has_key?(:'isInverse')
        self.is_inverse = attributes[:'isInverse']
      end

      if attributes.has_key?(:'initMargin')
        self.init_margin = attributes[:'initMargin']
      end

      if attributes.has_key?(:'maintMargin')
        self.maint_margin = attributes[:'maintMargin']
      end

      if attributes.has_key?(:'riskLimit')
        self.risk_limit = attributes[:'riskLimit']
      end

      if attributes.has_key?(:'riskStep')
        self.risk_step = attributes[:'riskStep']
      end

      if attributes.has_key?(:'limit')
        self.limit = attributes[:'limit']
      end

      if attributes.has_key?(:'capped')
        self.capped = attributes[:'capped']
      end

      if attributes.has_key?(:'taxed')
        self.taxed = attributes[:'taxed']
      end

      if attributes.has_key?(:'deleverage')
        self.deleverage = attributes[:'deleverage']
      end

      if attributes.has_key?(:'makerFee')
        self.maker_fee = attributes[:'makerFee']
      end

      if attributes.has_key?(:'takerFee')
        self.taker_fee = attributes[:'takerFee']
      end

      if attributes.has_key?(:'settlementFee')
        self.settlement_fee = attributes[:'settlementFee']
      end

      if attributes.has_key?(:'insuranceFee')
        self.insurance_fee = attributes[:'insuranceFee']
      end

      if attributes.has_key?(:'fundingBaseSymbol')
        self.funding_base_symbol = attributes[:'fundingBaseSymbol']
      end

      if attributes.has_key?(:'fundingQuoteSymbol')
        self.funding_quote_symbol = attributes[:'fundingQuoteSymbol']
      end

      if attributes.has_key?(:'fundingPremiumSymbol')
        self.funding_premium_symbol = attributes[:'fundingPremiumSymbol']
      end

      if attributes.has_key?(:'fundingTimestamp')
        self.funding_timestamp = attributes[:'fundingTimestamp']
      end

      if attributes.has_key?(:'fundingInterval')
        self.funding_interval = attributes[:'fundingInterval']
      end

      if attributes.has_key?(:'fundingRate')
        self.funding_rate = attributes[:'fundingRate']
      end

      if attributes.has_key?(:'indicativeFundingRate')
        self.indicative_funding_rate = attributes[:'indicativeFundingRate']
      end

      if attributes.has_key?(:'rebalanceTimestamp')
        self.rebalance_timestamp = attributes[:'rebalanceTimestamp']
      end

      if attributes.has_key?(:'rebalanceInterval')
        self.rebalance_interval = attributes[:'rebalanceInterval']
      end

      if attributes.has_key?(:'openingTimestamp')
        self.opening_timestamp = attributes[:'openingTimestamp']
      end

      if attributes.has_key?(:'closingTimestamp')
        self.closing_timestamp = attributes[:'closingTimestamp']
      end

      if attributes.has_key?(:'sessionInterval')
        self.session_interval = attributes[:'sessionInterval']
      end

      if attributes.has_key?(:'prevClosePrice')
        self.prev_close_price = attributes[:'prevClosePrice']
      end

      if attributes.has_key?(:'limitDownPrice')
        self.limit_down_price = attributes[:'limitDownPrice']
      end

      if attributes.has_key?(:'limitUpPrice')
        self.limit_up_price = attributes[:'limitUpPrice']
      end

      if attributes.has_key?(:'bankruptLimitDownPrice')
        self.bankrupt_limit_down_price = attributes[:'bankruptLimitDownPrice']
      end

      if attributes.has_key?(:'bankruptLimitUpPrice')
        self.bankrupt_limit_up_price = attributes[:'bankruptLimitUpPrice']
      end

      if attributes.has_key?(:'prevTotalVolume')
        self.prev_total_volume = attributes[:'prevTotalVolume']
      end

      if attributes.has_key?(:'totalVolume')
        self.total_volume = attributes[:'totalVolume']
      end

      if attributes.has_key?(:'volume')
        self.volume = attributes[:'volume']
      end

      if attributes.has_key?(:'volume24h')
        self.volume24h = attributes[:'volume24h']
      end

      if attributes.has_key?(:'prevTotalTurnover')
        self.prev_total_turnover = attributes[:'prevTotalTurnover']
      end

      if attributes.has_key?(:'totalTurnover')
        self.total_turnover = attributes[:'totalTurnover']
      end

      if attributes.has_key?(:'turnover')
        self.turnover = attributes[:'turnover']
      end

      if attributes.has_key?(:'turnover24h')
        self.turnover24h = attributes[:'turnover24h']
      end

      if attributes.has_key?(:'homeNotional24h')
        self.home_notional24h = attributes[:'homeNotional24h']
      end

      if attributes.has_key?(:'foreignNotional24h')
        self.foreign_notional24h = attributes[:'foreignNotional24h']
      end

      if attributes.has_key?(:'prevPrice24h')
        self.prev_price24h = attributes[:'prevPrice24h']
      end

      if attributes.has_key?(:'vwap')
        self.vwap = attributes[:'vwap']
      end

      if attributes.has_key?(:'highPrice')
        self.high_price = attributes[:'highPrice']
      end

      if attributes.has_key?(:'lowPrice')
        self.low_price = attributes[:'lowPrice']
      end

      if attributes.has_key?(:'lastPrice')
        self.last_price = attributes[:'lastPrice']
      end

      if attributes.has_key?(:'lastPriceProtected')
        self.last_price_protected = attributes[:'lastPriceProtected']
      end

      if attributes.has_key?(:'lastTickDirection')
        self.last_tick_direction = attributes[:'lastTickDirection']
      end

      if attributes.has_key?(:'lastChangePcnt')
        self.last_change_pcnt = attributes[:'lastChangePcnt']
      end

      if attributes.has_key?(:'bidPrice')
        self.bid_price = attributes[:'bidPrice']
      end

      if attributes.has_key?(:'midPrice')
        self.mid_price = attributes[:'midPrice']
      end

      if attributes.has_key?(:'askPrice')
        self.ask_price = attributes[:'askPrice']
      end

      if attributes.has_key?(:'impactBidPrice')
        self.impact_bid_price = attributes[:'impactBidPrice']
      end

      if attributes.has_key?(:'impactMidPrice')
        self.impact_mid_price = attributes[:'impactMidPrice']
      end

      if attributes.has_key?(:'impactAskPrice')
        self.impact_ask_price = attributes[:'impactAskPrice']
      end

      if attributes.has_key?(:'hasLiquidity')
        self.has_liquidity = attributes[:'hasLiquidity']
      end

      if attributes.has_key?(:'openInterest')
        self.open_interest = attributes[:'openInterest']
      end

      if attributes.has_key?(:'openValue')
        self.open_value = attributes[:'openValue']
      end

      if attributes.has_key?(:'fairMethod')
        self.fair_method = attributes[:'fairMethod']
      end

      if attributes.has_key?(:'fairBasisRate')
        self.fair_basis_rate = attributes[:'fairBasisRate']
      end

      if attributes.has_key?(:'fairBasis')
        self.fair_basis = attributes[:'fairBasis']
      end

      if attributes.has_key?(:'fairPrice')
        self.fair_price = attributes[:'fairPrice']
      end

      if attributes.has_key?(:'markMethod')
        self.mark_method = attributes[:'markMethod']
      end

      if attributes.has_key?(:'markPrice')
        self.mark_price = attributes[:'markPrice']
      end

      if attributes.has_key?(:'indicativeTaxRate')
        self.indicative_tax_rate = attributes[:'indicativeTaxRate']
      end

      if attributes.has_key?(:'indicativeSettlePrice')
        self.indicative_settle_price = attributes[:'indicativeSettlePrice']
      end

      if attributes.has_key?(:'optionUnderlyingPrice')
        self.option_underlying_price = attributes[:'optionUnderlyingPrice']
      end

      if attributes.has_key?(:'settledPrice')
        self.settled_price = attributes[:'settledPrice']
      end

      if attributes.has_key?(:'timestamp')
        self.timestamp = attributes[:'timestamp']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @symbol.nil?
        invalid_properties.push('invalid value for "symbol", symbol cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @symbol.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          symbol == o.symbol &&
          root_symbol == o.root_symbol &&
          state == o.state &&
          typ == o.typ &&
          listing == o.listing &&
          front == o.front &&
          expiry == o.expiry &&
          settle == o.settle &&
          relist_interval == o.relist_interval &&
          inverse_leg == o.inverse_leg &&
          sell_leg == o.sell_leg &&
          buy_leg == o.buy_leg &&
          option_strike_pcnt == o.option_strike_pcnt &&
          option_strike_round == o.option_strike_round &&
          option_strike_price == o.option_strike_price &&
          option_multiplier == o.option_multiplier &&
          position_currency == o.position_currency &&
          underlying == o.underlying &&
          quote_currency == o.quote_currency &&
          underlying_symbol == o.underlying_symbol &&
          reference == o.reference &&
          reference_symbol == o.reference_symbol &&
          calc_interval == o.calc_interval &&
          publish_interval == o.publish_interval &&
          publish_time == o.publish_time &&
          max_order_qty == o.max_order_qty &&
          max_price == o.max_price &&
          lot_size == o.lot_size &&
          tick_size == o.tick_size &&
          multiplier == o.multiplier &&
          settl_currency == o.settl_currency &&
          underlying_to_position_multiplier == o.underlying_to_position_multiplier &&
          underlying_to_settle_multiplier == o.underlying_to_settle_multiplier &&
          quote_to_settle_multiplier == o.quote_to_settle_multiplier &&
          is_quanto == o.is_quanto &&
          is_inverse == o.is_inverse &&
          init_margin == o.init_margin &&
          maint_margin == o.maint_margin &&
          risk_limit == o.risk_limit &&
          risk_step == o.risk_step &&
          limit == o.limit &&
          capped == o.capped &&
          taxed == o.taxed &&
          deleverage == o.deleverage &&
          maker_fee == o.maker_fee &&
          taker_fee == o.taker_fee &&
          settlement_fee == o.settlement_fee &&
          insurance_fee == o.insurance_fee &&
          funding_base_symbol == o.funding_base_symbol &&
          funding_quote_symbol == o.funding_quote_symbol &&
          funding_premium_symbol == o.funding_premium_symbol &&
          funding_timestamp == o.funding_timestamp &&
          funding_interval == o.funding_interval &&
          funding_rate == o.funding_rate &&
          indicative_funding_rate == o.indicative_funding_rate &&
          rebalance_timestamp == o.rebalance_timestamp &&
          rebalance_interval == o.rebalance_interval &&
          opening_timestamp == o.opening_timestamp &&
          closing_timestamp == o.closing_timestamp &&
          session_interval == o.session_interval &&
          prev_close_price == o.prev_close_price &&
          limit_down_price == o.limit_down_price &&
          limit_up_price == o.limit_up_price &&
          bankrupt_limit_down_price == o.bankrupt_limit_down_price &&
          bankrupt_limit_up_price == o.bankrupt_limit_up_price &&
          prev_total_volume == o.prev_total_volume &&
          total_volume == o.total_volume &&
          volume == o.volume &&
          volume24h == o.volume24h &&
          prev_total_turnover == o.prev_total_turnover &&
          total_turnover == o.total_turnover &&
          turnover == o.turnover &&
          turnover24h == o.turnover24h &&
          home_notional24h == o.home_notional24h &&
          foreign_notional24h == o.foreign_notional24h &&
          prev_price24h == o.prev_price24h &&
          vwap == o.vwap &&
          high_price == o.high_price &&
          low_price == o.low_price &&
          last_price == o.last_price &&
          last_price_protected == o.last_price_protected &&
          last_tick_direction == o.last_tick_direction &&
          last_change_pcnt == o.last_change_pcnt &&
          bid_price == o.bid_price &&
          mid_price == o.mid_price &&
          ask_price == o.ask_price &&
          impact_bid_price == o.impact_bid_price &&
          impact_mid_price == o.impact_mid_price &&
          impact_ask_price == o.impact_ask_price &&
          has_liquidity == o.has_liquidity &&
          open_interest == o.open_interest &&
          open_value == o.open_value &&
          fair_method == o.fair_method &&
          fair_basis_rate == o.fair_basis_rate &&
          fair_basis == o.fair_basis &&
          fair_price == o.fair_price &&
          mark_method == o.mark_method &&
          mark_price == o.mark_price &&
          indicative_tax_rate == o.indicative_tax_rate &&
          indicative_settle_price == o.indicative_settle_price &&
          option_underlying_price == o.option_underlying_price &&
          settled_price == o.settled_price &&
          timestamp == o.timestamp
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [symbol, root_symbol, state, typ, listing, front, expiry, settle, relist_interval, inverse_leg, sell_leg, buy_leg, option_strike_pcnt, option_strike_round, option_strike_price, option_multiplier, position_currency, underlying, quote_currency, underlying_symbol, reference, reference_symbol, calc_interval, publish_interval, publish_time, max_order_qty, max_price, lot_size, tick_size, multiplier, settl_currency, underlying_to_position_multiplier, underlying_to_settle_multiplier, quote_to_settle_multiplier, is_quanto, is_inverse, init_margin, maint_margin, risk_limit, risk_step, limit, capped, taxed, deleverage, maker_fee, taker_fee, settlement_fee, insurance_fee, funding_base_symbol, funding_quote_symbol, funding_premium_symbol, funding_timestamp, funding_interval, funding_rate, indicative_funding_rate, rebalance_timestamp, rebalance_interval, opening_timestamp, closing_timestamp, session_interval, prev_close_price, limit_down_price, limit_up_price, bankrupt_limit_down_price, bankrupt_limit_up_price, prev_total_volume, total_volume, volume, volume24h, prev_total_turnover, total_turnover, turnover, turnover24h, home_notional24h, foreign_notional24h, prev_price24h, vwap, high_price, low_price, last_price, last_price_protected, last_tick_direction, last_change_pcnt, bid_price, mid_price, ask_price, impact_bid_price, impact_mid_price, impact_ask_price, has_liquidity, open_interest, open_value, fair_method, fair_basis_rate, fair_basis, fair_price, mark_method, mark_price, indicative_tax_rate, indicative_settle_price, option_underlying_price, settled_price, timestamp].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.swagger_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :BOOLEAN
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        temp_model = SwaggerClient.const_get(type).new
        temp_model.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
