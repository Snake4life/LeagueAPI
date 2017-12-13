#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PaymentsFrontEndRequest.hpp>
#include <lol/def/PaymentsFrontEndResult.hpp>
namespace lol {
  Result<PaymentsFrontEndResult> PostPaymentsV1PmcStartUrl(const LeagueClient& _client, const PaymentsFrontEndRequest& options)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PaymentsFrontEndResult> {
        _client_.request("post", "/payments/v1/pmc-start-url?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(options).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PaymentsFrontEndResult> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}