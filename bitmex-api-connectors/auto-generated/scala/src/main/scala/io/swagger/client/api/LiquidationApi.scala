/**
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

package io.swagger.client.api

import java.text.SimpleDateFormat

import java.util.Date
import io.swagger.client.model.Error
import io.swagger.client.model.Liquidation
import io.swagger.client.model.Number
import io.swagger.client.{ApiInvoker, ApiException}

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date
import java.util.TimeZone

import scala.collection.mutable.HashMap

import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

import java.net.URI

import com.wordnik.swagger.client.ClientResponseReaders.Json4sFormatsReader._
import com.wordnik.swagger.client.RequestWriters.Json4sFormatsWriter._

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent._
import scala.concurrent.duration._
import scala.util.{Failure, Success, Try}

import org.json4s._

class LiquidationApi(
  val defBasePath: String = "https://www.bitmex.com/api/v1",
  defApiInvoker: ApiInvoker = ApiInvoker
) {
  private lazy val dateTimeFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  private val dateFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  implicit val formats = new org.json4s.DefaultFormats {
    override def dateFormatter = dateTimeFormatter
  }
  implicit val stringReader: ClientResponseReader[String] = ClientResponseReaders.StringReader
  implicit val unitReader: ClientResponseReader[Unit] = ClientResponseReaders.UnitReader
  implicit val jvalueReader: ClientResponseReader[JValue] = ClientResponseReaders.JValueReader
  implicit val jsonReader: ClientResponseReader[Nothing] = JsonFormatsReader
  implicit val stringWriter: RequestWriter[String] = RequestWriters.StringWriter
  implicit val jsonWriter: RequestWriter[Nothing] = JsonFormatsWriter

  var basePath: String = defBasePath
  var apiInvoker: ApiInvoker = defApiInvoker

  def addHeader(key: String, value: String): mutable.HashMap[String, String] = {
    apiInvoker.defaultHeaders += key -> value
  }

  val config: SwaggerConfig = SwaggerConfig.forUrl(new URI(defBasePath))
  val client = new RestClient(config)
  val helper = new LiquidationApiAsyncHelper(client, config)

  /**
   * Get liquidation orders.
   * 
   *
   * @param symbol Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
   * @param filter Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
   * @param columns Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
   * @param count Number of results to fetch. (optional, default to 100)
   * @param start Starting point for results. (optional, default to 0)
   * @param reverse If true, will sort results newest first. (optional, default to false)
   * @param startTime Starting date filter for results. (optional)
   * @param endTime Ending date filter for results. (optional)
   * @return List[Liquidation]
   */
  def liquidationGet(symbol: Option[String] = None, filter: Option[String] = None, columns: Option[String] = None, count: Option[Number] = Option(100), start: Option[Number] = Option(0), reverse: Option[Boolean] = Option(false), startTime: Option[Date] = None, endTime: Option[Date] = None): Option[List[Liquidation]] = {
    val await = Try(Await.result(liquidationGetAsync(symbol, filter, columns, count, start, reverse, startTime, endTime), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get liquidation orders. asynchronously
   * 
   *
   * @param symbol Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
   * @param filter Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
   * @param columns Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
   * @param count Number of results to fetch. (optional, default to 100)
   * @param start Starting point for results. (optional, default to 0)
   * @param reverse If true, will sort results newest first. (optional, default to false)
   * @param startTime Starting date filter for results. (optional)
   * @param endTime Ending date filter for results. (optional)
   * @return Future(List[Liquidation])
   */
  def liquidationGetAsync(symbol: Option[String] = None, filter: Option[String] = None, columns: Option[String] = None, count: Option[Number] = Option(100), start: Option[Number] = Option(0), reverse: Option[Boolean] = Option(false), startTime: Option[Date] = None, endTime: Option[Date] = None): Future[List[Liquidation]] = {
      helper.liquidationGet(symbol, filter, columns, count, start, reverse, startTime, endTime)
  }

}

class LiquidationApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def liquidationGet(symbol: Option[String] = None,
    filter: Option[String] = None,
    columns: Option[String] = None,
    count: Option[Number] = Option(100),
    start: Option[Number] = Option(0),
    reverse: Option[Boolean] = Option(false),
    startTime: Option[Date] = None,
    endTime: Option[Date] = None
    )(implicit reader: ClientResponseReader[List[Liquidation]]): Future[List[Liquidation]] = {
    // create path and map variables
    val path = (addFmt("/liquidation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    symbol match {
      case Some(param) => queryParams += "symbol" -> param.toString
      case _ => queryParams
    }
    filter match {
      case Some(param) => queryParams += "filter" -> param.toString
      case _ => queryParams
    }
    columns match {
      case Some(param) => queryParams += "columns" -> param.toString
      case _ => queryParams
    }
    count match {
      case Some(param) => queryParams += "count" -> param.toString
      case _ => queryParams
    }
    start match {
      case Some(param) => queryParams += "start" -> param.toString
      case _ => queryParams
    }
    reverse match {
      case Some(param) => queryParams += "reverse" -> param.toString
      case _ => queryParams
    }
    startTime match {
      case Some(param) => queryParams += "startTime" -> param.toString
      case _ => queryParams
    }
    endTime match {
      case Some(param) => queryParams += "endTime" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
