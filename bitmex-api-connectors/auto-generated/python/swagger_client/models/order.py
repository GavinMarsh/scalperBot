# coding: utf-8

"""
    BitMEX API

    ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.   # noqa: E501

    OpenAPI spec version: 1.2.0
    Contact: support@bitmex.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class Order(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'order_id': 'str',
        'cl_ord_id': 'str',
        'cl_ord_link_id': 'str',
        'account': 'float',
        'symbol': 'str',
        'side': 'str',
        'simple_order_qty': 'float',
        'order_qty': 'float',
        'price': 'float',
        'display_qty': 'float',
        'stop_px': 'float',
        'peg_offset_value': 'float',
        'peg_price_type': 'str',
        'currency': 'str',
        'settl_currency': 'str',
        'ord_type': 'str',
        'time_in_force': 'str',
        'exec_inst': 'str',
        'contingency_type': 'str',
        'ex_destination': 'str',
        'ord_status': 'str',
        'triggered': 'str',
        'working_indicator': 'bool',
        'ord_rej_reason': 'str',
        'simple_leaves_qty': 'float',
        'leaves_qty': 'float',
        'simple_cum_qty': 'float',
        'cum_qty': 'float',
        'avg_px': 'float',
        'multi_leg_reporting_type': 'str',
        'text': 'str',
        'transact_time': 'datetime',
        'timestamp': 'datetime'
    }

    attribute_map = {
        'order_id': 'orderID',
        'cl_ord_id': 'clOrdID',
        'cl_ord_link_id': 'clOrdLinkID',
        'account': 'account',
        'symbol': 'symbol',
        'side': 'side',
        'simple_order_qty': 'simpleOrderQty',
        'order_qty': 'orderQty',
        'price': 'price',
        'display_qty': 'displayQty',
        'stop_px': 'stopPx',
        'peg_offset_value': 'pegOffsetValue',
        'peg_price_type': 'pegPriceType',
        'currency': 'currency',
        'settl_currency': 'settlCurrency',
        'ord_type': 'ordType',
        'time_in_force': 'timeInForce',
        'exec_inst': 'execInst',
        'contingency_type': 'contingencyType',
        'ex_destination': 'exDestination',
        'ord_status': 'ordStatus',
        'triggered': 'triggered',
        'working_indicator': 'workingIndicator',
        'ord_rej_reason': 'ordRejReason',
        'simple_leaves_qty': 'simpleLeavesQty',
        'leaves_qty': 'leavesQty',
        'simple_cum_qty': 'simpleCumQty',
        'cum_qty': 'cumQty',
        'avg_px': 'avgPx',
        'multi_leg_reporting_type': 'multiLegReportingType',
        'text': 'text',
        'transact_time': 'transactTime',
        'timestamp': 'timestamp'
    }

    def __init__(self, order_id=None, cl_ord_id=None, cl_ord_link_id=None, account=None, symbol=None, side=None, simple_order_qty=None, order_qty=None, price=None, display_qty=None, stop_px=None, peg_offset_value=None, peg_price_type=None, currency=None, settl_currency=None, ord_type=None, time_in_force=None, exec_inst=None, contingency_type=None, ex_destination=None, ord_status=None, triggered=None, working_indicator=None, ord_rej_reason=None, simple_leaves_qty=None, leaves_qty=None, simple_cum_qty=None, cum_qty=None, avg_px=None, multi_leg_reporting_type=None, text=None, transact_time=None, timestamp=None):  # noqa: E501
        """Order - a model defined in Swagger"""  # noqa: E501

        self._order_id = None
        self._cl_ord_id = None
        self._cl_ord_link_id = None
        self._account = None
        self._symbol = None
        self._side = None
        self._simple_order_qty = None
        self._order_qty = None
        self._price = None
        self._display_qty = None
        self._stop_px = None
        self._peg_offset_value = None
        self._peg_price_type = None
        self._currency = None
        self._settl_currency = None
        self._ord_type = None
        self._time_in_force = None
        self._exec_inst = None
        self._contingency_type = None
        self._ex_destination = None
        self._ord_status = None
        self._triggered = None
        self._working_indicator = None
        self._ord_rej_reason = None
        self._simple_leaves_qty = None
        self._leaves_qty = None
        self._simple_cum_qty = None
        self._cum_qty = None
        self._avg_px = None
        self._multi_leg_reporting_type = None
        self._text = None
        self._transact_time = None
        self._timestamp = None
        self.discriminator = None

        self.order_id = order_id
        if cl_ord_id is not None:
            self.cl_ord_id = cl_ord_id
        if cl_ord_link_id is not None:
            self.cl_ord_link_id = cl_ord_link_id
        if account is not None:
            self.account = account
        if symbol is not None:
            self.symbol = symbol
        if side is not None:
            self.side = side
        if simple_order_qty is not None:
            self.simple_order_qty = simple_order_qty
        if order_qty is not None:
            self.order_qty = order_qty
        if price is not None:
            self.price = price
        if display_qty is not None:
            self.display_qty = display_qty
        if stop_px is not None:
            self.stop_px = stop_px
        if peg_offset_value is not None:
            self.peg_offset_value = peg_offset_value
        if peg_price_type is not None:
            self.peg_price_type = peg_price_type
        if currency is not None:
            self.currency = currency
        if settl_currency is not None:
            self.settl_currency = settl_currency
        if ord_type is not None:
            self.ord_type = ord_type
        if time_in_force is not None:
            self.time_in_force = time_in_force
        if exec_inst is not None:
            self.exec_inst = exec_inst
        if contingency_type is not None:
            self.contingency_type = contingency_type
        if ex_destination is not None:
            self.ex_destination = ex_destination
        if ord_status is not None:
            self.ord_status = ord_status
        if triggered is not None:
            self.triggered = triggered
        if working_indicator is not None:
            self.working_indicator = working_indicator
        if ord_rej_reason is not None:
            self.ord_rej_reason = ord_rej_reason
        if simple_leaves_qty is not None:
            self.simple_leaves_qty = simple_leaves_qty
        if leaves_qty is not None:
            self.leaves_qty = leaves_qty
        if simple_cum_qty is not None:
            self.simple_cum_qty = simple_cum_qty
        if cum_qty is not None:
            self.cum_qty = cum_qty
        if avg_px is not None:
            self.avg_px = avg_px
        if multi_leg_reporting_type is not None:
            self.multi_leg_reporting_type = multi_leg_reporting_type
        if text is not None:
            self.text = text
        if transact_time is not None:
            self.transact_time = transact_time
        if timestamp is not None:
            self.timestamp = timestamp

    @property
    def order_id(self):
        """Gets the order_id of this Order.  # noqa: E501


        :return: The order_id of this Order.  # noqa: E501
        :rtype: str
        """
        return self._order_id

    @order_id.setter
    def order_id(self, order_id):
        """Sets the order_id of this Order.


        :param order_id: The order_id of this Order.  # noqa: E501
        :type: str
        """
        if order_id is None:
            raise ValueError("Invalid value for `order_id`, must not be `None`")  # noqa: E501

        self._order_id = order_id

    @property
    def cl_ord_id(self):
        """Gets the cl_ord_id of this Order.  # noqa: E501


        :return: The cl_ord_id of this Order.  # noqa: E501
        :rtype: str
        """
        return self._cl_ord_id

    @cl_ord_id.setter
    def cl_ord_id(self, cl_ord_id):
        """Sets the cl_ord_id of this Order.


        :param cl_ord_id: The cl_ord_id of this Order.  # noqa: E501
        :type: str
        """

        self._cl_ord_id = cl_ord_id

    @property
    def cl_ord_link_id(self):
        """Gets the cl_ord_link_id of this Order.  # noqa: E501


        :return: The cl_ord_link_id of this Order.  # noqa: E501
        :rtype: str
        """
        return self._cl_ord_link_id

    @cl_ord_link_id.setter
    def cl_ord_link_id(self, cl_ord_link_id):
        """Sets the cl_ord_link_id of this Order.


        :param cl_ord_link_id: The cl_ord_link_id of this Order.  # noqa: E501
        :type: str
        """

        self._cl_ord_link_id = cl_ord_link_id

    @property
    def account(self):
        """Gets the account of this Order.  # noqa: E501


        :return: The account of this Order.  # noqa: E501
        :rtype: float
        """
        return self._account

    @account.setter
    def account(self, account):
        """Sets the account of this Order.


        :param account: The account of this Order.  # noqa: E501
        :type: float
        """

        self._account = account

    @property
    def symbol(self):
        """Gets the symbol of this Order.  # noqa: E501


        :return: The symbol of this Order.  # noqa: E501
        :rtype: str
        """
        return self._symbol

    @symbol.setter
    def symbol(self, symbol):
        """Sets the symbol of this Order.


        :param symbol: The symbol of this Order.  # noqa: E501
        :type: str
        """

        self._symbol = symbol

    @property
    def side(self):
        """Gets the side of this Order.  # noqa: E501


        :return: The side of this Order.  # noqa: E501
        :rtype: str
        """
        return self._side

    @side.setter
    def side(self, side):
        """Sets the side of this Order.


        :param side: The side of this Order.  # noqa: E501
        :type: str
        """

        self._side = side

    @property
    def simple_order_qty(self):
        """Gets the simple_order_qty of this Order.  # noqa: E501


        :return: The simple_order_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._simple_order_qty

    @simple_order_qty.setter
    def simple_order_qty(self, simple_order_qty):
        """Sets the simple_order_qty of this Order.


        :param simple_order_qty: The simple_order_qty of this Order.  # noqa: E501
        :type: float
        """

        self._simple_order_qty = simple_order_qty

    @property
    def order_qty(self):
        """Gets the order_qty of this Order.  # noqa: E501


        :return: The order_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._order_qty

    @order_qty.setter
    def order_qty(self, order_qty):
        """Sets the order_qty of this Order.


        :param order_qty: The order_qty of this Order.  # noqa: E501
        :type: float
        """

        self._order_qty = order_qty

    @property
    def price(self):
        """Gets the price of this Order.  # noqa: E501


        :return: The price of this Order.  # noqa: E501
        :rtype: float
        """
        return self._price

    @price.setter
    def price(self, price):
        """Sets the price of this Order.


        :param price: The price of this Order.  # noqa: E501
        :type: float
        """

        self._price = price

    @property
    def display_qty(self):
        """Gets the display_qty of this Order.  # noqa: E501


        :return: The display_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._display_qty

    @display_qty.setter
    def display_qty(self, display_qty):
        """Sets the display_qty of this Order.


        :param display_qty: The display_qty of this Order.  # noqa: E501
        :type: float
        """

        self._display_qty = display_qty

    @property
    def stop_px(self):
        """Gets the stop_px of this Order.  # noqa: E501


        :return: The stop_px of this Order.  # noqa: E501
        :rtype: float
        """
        return self._stop_px

    @stop_px.setter
    def stop_px(self, stop_px):
        """Sets the stop_px of this Order.


        :param stop_px: The stop_px of this Order.  # noqa: E501
        :type: float
        """

        self._stop_px = stop_px

    @property
    def peg_offset_value(self):
        """Gets the peg_offset_value of this Order.  # noqa: E501


        :return: The peg_offset_value of this Order.  # noqa: E501
        :rtype: float
        """
        return self._peg_offset_value

    @peg_offset_value.setter
    def peg_offset_value(self, peg_offset_value):
        """Sets the peg_offset_value of this Order.


        :param peg_offset_value: The peg_offset_value of this Order.  # noqa: E501
        :type: float
        """

        self._peg_offset_value = peg_offset_value

    @property
    def peg_price_type(self):
        """Gets the peg_price_type of this Order.  # noqa: E501


        :return: The peg_price_type of this Order.  # noqa: E501
        :rtype: str
        """
        return self._peg_price_type

    @peg_price_type.setter
    def peg_price_type(self, peg_price_type):
        """Sets the peg_price_type of this Order.


        :param peg_price_type: The peg_price_type of this Order.  # noqa: E501
        :type: str
        """

        self._peg_price_type = peg_price_type

    @property
    def currency(self):
        """Gets the currency of this Order.  # noqa: E501


        :return: The currency of this Order.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this Order.


        :param currency: The currency of this Order.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def settl_currency(self):
        """Gets the settl_currency of this Order.  # noqa: E501


        :return: The settl_currency of this Order.  # noqa: E501
        :rtype: str
        """
        return self._settl_currency

    @settl_currency.setter
    def settl_currency(self, settl_currency):
        """Sets the settl_currency of this Order.


        :param settl_currency: The settl_currency of this Order.  # noqa: E501
        :type: str
        """

        self._settl_currency = settl_currency

    @property
    def ord_type(self):
        """Gets the ord_type of this Order.  # noqa: E501


        :return: The ord_type of this Order.  # noqa: E501
        :rtype: str
        """
        return self._ord_type

    @ord_type.setter
    def ord_type(self, ord_type):
        """Sets the ord_type of this Order.


        :param ord_type: The ord_type of this Order.  # noqa: E501
        :type: str
        """

        self._ord_type = ord_type

    @property
    def time_in_force(self):
        """Gets the time_in_force of this Order.  # noqa: E501


        :return: The time_in_force of this Order.  # noqa: E501
        :rtype: str
        """
        return self._time_in_force

    @time_in_force.setter
    def time_in_force(self, time_in_force):
        """Sets the time_in_force of this Order.


        :param time_in_force: The time_in_force of this Order.  # noqa: E501
        :type: str
        """

        self._time_in_force = time_in_force

    @property
    def exec_inst(self):
        """Gets the exec_inst of this Order.  # noqa: E501


        :return: The exec_inst of this Order.  # noqa: E501
        :rtype: str
        """
        return self._exec_inst

    @exec_inst.setter
    def exec_inst(self, exec_inst):
        """Sets the exec_inst of this Order.


        :param exec_inst: The exec_inst of this Order.  # noqa: E501
        :type: str
        """

        self._exec_inst = exec_inst

    @property
    def contingency_type(self):
        """Gets the contingency_type of this Order.  # noqa: E501


        :return: The contingency_type of this Order.  # noqa: E501
        :rtype: str
        """
        return self._contingency_type

    @contingency_type.setter
    def contingency_type(self, contingency_type):
        """Sets the contingency_type of this Order.


        :param contingency_type: The contingency_type of this Order.  # noqa: E501
        :type: str
        """

        self._contingency_type = contingency_type

    @property
    def ex_destination(self):
        """Gets the ex_destination of this Order.  # noqa: E501


        :return: The ex_destination of this Order.  # noqa: E501
        :rtype: str
        """
        return self._ex_destination

    @ex_destination.setter
    def ex_destination(self, ex_destination):
        """Sets the ex_destination of this Order.


        :param ex_destination: The ex_destination of this Order.  # noqa: E501
        :type: str
        """

        self._ex_destination = ex_destination

    @property
    def ord_status(self):
        """Gets the ord_status of this Order.  # noqa: E501


        :return: The ord_status of this Order.  # noqa: E501
        :rtype: str
        """
        return self._ord_status

    @ord_status.setter
    def ord_status(self, ord_status):
        """Sets the ord_status of this Order.


        :param ord_status: The ord_status of this Order.  # noqa: E501
        :type: str
        """

        self._ord_status = ord_status

    @property
    def triggered(self):
        """Gets the triggered of this Order.  # noqa: E501


        :return: The triggered of this Order.  # noqa: E501
        :rtype: str
        """
        return self._triggered

    @triggered.setter
    def triggered(self, triggered):
        """Sets the triggered of this Order.


        :param triggered: The triggered of this Order.  # noqa: E501
        :type: str
        """

        self._triggered = triggered

    @property
    def working_indicator(self):
        """Gets the working_indicator of this Order.  # noqa: E501


        :return: The working_indicator of this Order.  # noqa: E501
        :rtype: bool
        """
        return self._working_indicator

    @working_indicator.setter
    def working_indicator(self, working_indicator):
        """Sets the working_indicator of this Order.


        :param working_indicator: The working_indicator of this Order.  # noqa: E501
        :type: bool
        """

        self._working_indicator = working_indicator

    @property
    def ord_rej_reason(self):
        """Gets the ord_rej_reason of this Order.  # noqa: E501


        :return: The ord_rej_reason of this Order.  # noqa: E501
        :rtype: str
        """
        return self._ord_rej_reason

    @ord_rej_reason.setter
    def ord_rej_reason(self, ord_rej_reason):
        """Sets the ord_rej_reason of this Order.


        :param ord_rej_reason: The ord_rej_reason of this Order.  # noqa: E501
        :type: str
        """

        self._ord_rej_reason = ord_rej_reason

    @property
    def simple_leaves_qty(self):
        """Gets the simple_leaves_qty of this Order.  # noqa: E501


        :return: The simple_leaves_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._simple_leaves_qty

    @simple_leaves_qty.setter
    def simple_leaves_qty(self, simple_leaves_qty):
        """Sets the simple_leaves_qty of this Order.


        :param simple_leaves_qty: The simple_leaves_qty of this Order.  # noqa: E501
        :type: float
        """

        self._simple_leaves_qty = simple_leaves_qty

    @property
    def leaves_qty(self):
        """Gets the leaves_qty of this Order.  # noqa: E501


        :return: The leaves_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._leaves_qty

    @leaves_qty.setter
    def leaves_qty(self, leaves_qty):
        """Sets the leaves_qty of this Order.


        :param leaves_qty: The leaves_qty of this Order.  # noqa: E501
        :type: float
        """

        self._leaves_qty = leaves_qty

    @property
    def simple_cum_qty(self):
        """Gets the simple_cum_qty of this Order.  # noqa: E501


        :return: The simple_cum_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._simple_cum_qty

    @simple_cum_qty.setter
    def simple_cum_qty(self, simple_cum_qty):
        """Sets the simple_cum_qty of this Order.


        :param simple_cum_qty: The simple_cum_qty of this Order.  # noqa: E501
        :type: float
        """

        self._simple_cum_qty = simple_cum_qty

    @property
    def cum_qty(self):
        """Gets the cum_qty of this Order.  # noqa: E501


        :return: The cum_qty of this Order.  # noqa: E501
        :rtype: float
        """
        return self._cum_qty

    @cum_qty.setter
    def cum_qty(self, cum_qty):
        """Sets the cum_qty of this Order.


        :param cum_qty: The cum_qty of this Order.  # noqa: E501
        :type: float
        """

        self._cum_qty = cum_qty

    @property
    def avg_px(self):
        """Gets the avg_px of this Order.  # noqa: E501


        :return: The avg_px of this Order.  # noqa: E501
        :rtype: float
        """
        return self._avg_px

    @avg_px.setter
    def avg_px(self, avg_px):
        """Sets the avg_px of this Order.


        :param avg_px: The avg_px of this Order.  # noqa: E501
        :type: float
        """

        self._avg_px = avg_px

    @property
    def multi_leg_reporting_type(self):
        """Gets the multi_leg_reporting_type of this Order.  # noqa: E501


        :return: The multi_leg_reporting_type of this Order.  # noqa: E501
        :rtype: str
        """
        return self._multi_leg_reporting_type

    @multi_leg_reporting_type.setter
    def multi_leg_reporting_type(self, multi_leg_reporting_type):
        """Sets the multi_leg_reporting_type of this Order.


        :param multi_leg_reporting_type: The multi_leg_reporting_type of this Order.  # noqa: E501
        :type: str
        """

        self._multi_leg_reporting_type = multi_leg_reporting_type

    @property
    def text(self):
        """Gets the text of this Order.  # noqa: E501


        :return: The text of this Order.  # noqa: E501
        :rtype: str
        """
        return self._text

    @text.setter
    def text(self, text):
        """Sets the text of this Order.


        :param text: The text of this Order.  # noqa: E501
        :type: str
        """

        self._text = text

    @property
    def transact_time(self):
        """Gets the transact_time of this Order.  # noqa: E501


        :return: The transact_time of this Order.  # noqa: E501
        :rtype: datetime
        """
        return self._transact_time

    @transact_time.setter
    def transact_time(self, transact_time):
        """Sets the transact_time of this Order.


        :param transact_time: The transact_time of this Order.  # noqa: E501
        :type: datetime
        """

        self._transact_time = transact_time

    @property
    def timestamp(self):
        """Gets the timestamp of this Order.  # noqa: E501


        :return: The timestamp of this Order.  # noqa: E501
        :rtype: datetime
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """Sets the timestamp of this Order.


        :param timestamp: The timestamp of this Order.  # noqa: E501
        :type: datetime
        """

        self._timestamp = timestamp

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(Order, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Order):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
