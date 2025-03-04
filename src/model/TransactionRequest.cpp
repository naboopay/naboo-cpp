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



#include "naboo/model/TransactionRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TransactionRequest::TransactionRequest()
{
    m_Method_of_paymentIsSet = false;
    m_ProductsIsSet = false;
    m_Success_url = utility::conversions::to_string_t("");
    m_Success_urlIsSet = false;
    m_Error_url = utility::conversions::to_string_t("");
    m_Error_urlIsSet = false;
    m_Is_escrow = false;
    m_Is_escrowIsSet = false;
    m_Is_merchant = false;
    m_Is_merchantIsSet = false;
}

TransactionRequest::~TransactionRequest()
{
}

void TransactionRequest::validate()
{
    // TODO: implement validation
}

web::json::value TransactionRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Method_of_paymentIsSet)
    {
        val[utility::conversions::to_string_t(U("method_of_payment"))] = ModelBase::toJson(m_Method_of_payment);
    }
    if(m_ProductsIsSet)
    {
        val[utility::conversions::to_string_t(U("products"))] = ModelBase::toJson(m_Products);
    }
    if(m_Success_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("success_url"))] = ModelBase::toJson(m_Success_url);
    }
    if(m_Error_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("error_url"))] = ModelBase::toJson(m_Error_url);
    }
    if(m_Is_escrowIsSet)
    {
        val[utility::conversions::to_string_t(U("is_escrow"))] = ModelBase::toJson(m_Is_escrow);
    }
    if(m_Is_merchantIsSet)
    {
        val[utility::conversions::to_string_t(U("is_merchant"))] = ModelBase::toJson(m_Is_merchant);
    }

    return val;
}

bool TransactionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("method_of_payment"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("method_of_payment")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Wallet>> refVal_setMethodOfPayment;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMethodOfPayment);
            setMethodOfPayment(refVal_setMethodOfPayment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("products"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("products")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ProductModel>> refVal_setProducts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProducts);
            setProducts(refVal_setProducts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("success_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSuccessUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccessUrl);
            setSuccessUrl(refVal_setSuccessUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("error_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setErrorUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorUrl);
            setErrorUrl(refVal_setErrorUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_escrow"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_escrow")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsEscrow;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsEscrow);
            setIsEscrow(refVal_setIsEscrow);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_merchant"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_merchant")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsMerchant;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsMerchant);
            setIsMerchant(refVal_setIsMerchant);
        }
    }
    return ok;
}

void TransactionRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Method_of_paymentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("method_of_payment")), m_Method_of_payment));
    }
    if(m_ProductsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("products")), m_Products));
    }
    if(m_Success_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("success_url")), m_Success_url));
    }
    if(m_Error_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error_url")), m_Error_url));
    }
    if(m_Is_escrowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_escrow")), m_Is_escrow));
    }
    if(m_Is_merchantIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_merchant")), m_Is_merchant));
    }
}

bool TransactionRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("method_of_payment"))))
    {
        std::vector<std::shared_ptr<Wallet>> refVal_setMethodOfPayment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("method_of_payment"))), refVal_setMethodOfPayment );
        setMethodOfPayment(refVal_setMethodOfPayment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("products"))))
    {
        std::vector<std::shared_ptr<ProductModel>> refVal_setProducts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("products"))), refVal_setProducts );
        setProducts(refVal_setProducts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("success_url"))))
    {
        utility::string_t refVal_setSuccessUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success_url"))), refVal_setSuccessUrl );
        setSuccessUrl(refVal_setSuccessUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("error_url"))))
    {
        utility::string_t refVal_setErrorUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error_url"))), refVal_setErrorUrl );
        setErrorUrl(refVal_setErrorUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_escrow"))))
    {
        bool refVal_setIsEscrow;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_escrow"))), refVal_setIsEscrow );
        setIsEscrow(refVal_setIsEscrow);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_merchant"))))
    {
        bool refVal_setIsMerchant;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_merchant"))), refVal_setIsMerchant );
        setIsMerchant(refVal_setIsMerchant);
    }
    return ok;
}

std::vector<std::shared_ptr<Wallet>>& TransactionRequest::getMethodOfPayment()
{
    return m_Method_of_payment;
}

void TransactionRequest::setMethodOfPayment(const std::vector<std::shared_ptr<Wallet>>& value)
{
    m_Method_of_payment = value;
    m_Method_of_paymentIsSet = true;
}

bool TransactionRequest::methodOfPaymentIsSet() const
{
    return m_Method_of_paymentIsSet;
}

void TransactionRequest::unsetMethod_of_payment()
{
    m_Method_of_paymentIsSet = false;
}
std::vector<std::shared_ptr<ProductModel>>& TransactionRequest::getProducts()
{
    return m_Products;
}

void TransactionRequest::setProducts(const std::vector<std::shared_ptr<ProductModel>>& value)
{
    m_Products = value;
    m_ProductsIsSet = true;
}

bool TransactionRequest::productsIsSet() const
{
    return m_ProductsIsSet;
}

void TransactionRequest::unsetProducts()
{
    m_ProductsIsSet = false;
}
utility::string_t TransactionRequest::getSuccessUrl() const
{
    return m_Success_url;
}

void TransactionRequest::setSuccessUrl(const utility::string_t& value)
{
    m_Success_url = value;
    m_Success_urlIsSet = true;
}

bool TransactionRequest::successUrlIsSet() const
{
    return m_Success_urlIsSet;
}

void TransactionRequest::unsetSuccess_url()
{
    m_Success_urlIsSet = false;
}
utility::string_t TransactionRequest::getErrorUrl() const
{
    return m_Error_url;
}

void TransactionRequest::setErrorUrl(const utility::string_t& value)
{
    m_Error_url = value;
    m_Error_urlIsSet = true;
}

bool TransactionRequest::errorUrlIsSet() const
{
    return m_Error_urlIsSet;
}

void TransactionRequest::unsetError_url()
{
    m_Error_urlIsSet = false;
}
bool TransactionRequest::isIsEscrow() const
{
    return m_Is_escrow;
}

void TransactionRequest::setIsEscrow(bool value)
{
    m_Is_escrow = value;
    m_Is_escrowIsSet = true;
}

bool TransactionRequest::isEscrowIsSet() const
{
    return m_Is_escrowIsSet;
}

void TransactionRequest::unsetIs_escrow()
{
    m_Is_escrowIsSet = false;
}
bool TransactionRequest::isIsMerchant() const
{
    return m_Is_merchant;
}

void TransactionRequest::setIsMerchant(bool value)
{
    m_Is_merchant = value;
    m_Is_merchantIsSet = true;
}

bool TransactionRequest::isMerchantIsSet() const
{
    return m_Is_merchantIsSet;
}

void TransactionRequest::unsetIs_merchant()
{
    m_Is_merchantIsSet = false;
}
}
}
}
}


