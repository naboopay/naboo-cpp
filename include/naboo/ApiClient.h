/**
 * NabooApi V1
 * Here you have the first version of the naboo api to create checkout automatically
 *
 * The version of the OpenAPI document: 0.1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ApiClient.h
 *
 * This is an API client responsible for stating the HTTP calls
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ApiClient_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ApiClient_H_


#include "naboo/ApiConfiguration.h"
#include "naboo/ApiException.h"
#include "naboo/IHttpBody.h"
#include "naboo/HttpContent.h"

#if  defined (_WIN32) || defined (_WIN64)
#undef U
#endif

#include <cpprest/details/basic_types.h>
#include <cpprest/http_client.h>

#include <memory>
#include <vector>
#include <functional>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

class  ApiClient
{
public:
    ApiClient( std::shared_ptr<const ApiConfiguration> configuration = nullptr );
    virtual ~ApiClient();

    typedef std::function<void(web::http::status_code, const web::http::http_headers&)> ResponseHandlerType;

    const ResponseHandlerType& getResponseHandler() const;
    void setResponseHandler(const ResponseHandlerType& responseHandler);

    std::shared_ptr<const ApiConfiguration> getConfiguration() const;
    void setConfiguration(std::shared_ptr<const ApiConfiguration> configuration);

    static utility::string_t parameterToString(utility::string_t value);
    static utility::string_t parameterToString(int32_t value);
    static utility::string_t parameterToString(int64_t value);
    static utility::string_t parameterToString(float value);
    static utility::string_t parameterToString(double value);
    static utility::string_t parameterToString(const utility::datetime &value);
    static utility::string_t parameterToString(bool value);
    template<class T>
    static utility::string_t parameterToString(const std::vector<T>& value);
    template<class T>
    static utility::string_t parameterToString(const std::shared_ptr<T>& value);

    pplx::task<web::http::http_response> callApi(
        const utility::string_t& path,
        const utility::string_t& method,
        const std::map<utility::string_t, utility::string_t>& queryParams,
        const std::shared_ptr<IHttpBody> postBody,
        const std::map<utility::string_t, utility::string_t>& headerParams,
        const std::map<utility::string_t, utility::string_t>& formParams,
        const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
        const utility::string_t& contentType
    ) const;

protected:

    ResponseHandlerType m_ResponseHandler;
    std::shared_ptr<const ApiConfiguration> m_Configuration;
};

template<class T>
utility::string_t ApiClient::parameterToString(const std::vector<T>& value)
{
    utility::stringstream_t ss;

    for( size_t i = 0; i < value.size(); i++)
    {
        if( i > 0) ss << utility::conversions::to_string_t(", ");
        ss << ApiClient::parameterToString(value[i]);
    }

    return ss.str();
}

template<class T>
utility::string_t ApiClient::parameterToString(const std::shared_ptr<T>& value)
{
    return parameterToString(*value.get());
}


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ApiClient_H_ */
