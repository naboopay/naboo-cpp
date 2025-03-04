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



#include "naboo/model/GetOneTransaction.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GetOneTransaction::GetOneTransaction()
{
    m_Order_id = utility::conversions::to_string_t("");
    m_Order_idIsSet = false;
    m_Method_of_paymentIsSet = false;
    m_Amount = 0;
    m_AmountIsSet = false;
    m_Amount_to_pay = 0;
    m_Amount_to_payIsSet = false;
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Transaction_statusIsSet = false;
    m_ProductsIsSet = false;
    m_Is_done = false;
    m_Is_doneIsSet = false;
    m_Is_escrow = false;
    m_Is_escrowIsSet = false;
    m_Is_merchant = false;
    m_Is_merchantIsSet = false;
    m_Checkout_url = utility::conversions::to_string_t("");
    m_Checkout_urlIsSet = false;
}

GetOneTransaction::~GetOneTransaction()
{
}

void GetOneTransaction::validate()
{
    // TODO: implement validation
}

web::json::value GetOneTransaction::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Order_idIsSet)
    {
        val[utility::conversions::to_string_t(U("order_id"))] = ModelBase::toJson(m_Order_id);
    }
    if(m_Method_of_paymentIsSet)
    {
        val[utility::conversions::to_string_t(U("method_of_payment"))] = ModelBase::toJson(m_Method_of_payment);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t(U("amount"))] = ModelBase::toJson(m_Amount);
    }
    if(m_Amount_to_payIsSet)
    {
        val[utility::conversions::to_string_t(U("amount_to_pay"))] = ModelBase::toJson(m_Amount_to_pay);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t(U("currency"))] = ModelBase::toJson(m_Currency);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_Transaction_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("transaction_status"))] = ModelBase::toJson(m_Transaction_status);
    }
    if(m_ProductsIsSet)
    {
        val[utility::conversions::to_string_t(U("products"))] = ModelBase::toJson(m_Products);
    }
    if(m_Is_doneIsSet)
    {
        val[utility::conversions::to_string_t(U("is_done"))] = ModelBase::toJson(m_Is_done);
    }
    if(m_Is_escrowIsSet)
    {
        val[utility::conversions::to_string_t(U("is_escrow"))] = ModelBase::toJson(m_Is_escrow);
    }
    if(m_Is_merchantIsSet)
    {
        val[utility::conversions::to_string_t(U("is_merchant"))] = ModelBase::toJson(m_Is_merchant);
    }
    if(m_Checkout_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("checkout_url"))] = ModelBase::toJson(m_Checkout_url);
    }

    return val;
}

bool GetOneTransaction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("order_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("order_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrderId);
            setOrderId(refVal_setOrderId);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("amount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("amount")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAmount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAmount);
            setAmount(refVal_setAmount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("amount_to_pay"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("amount_to_pay")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAmountToPay;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAmountToPay);
            setAmountToPay(refVal_setAmountToPay);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("currency")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrency);
            setCurrency(refVal_setCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transaction_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transaction_status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TransactionStatusEnum> refVal_setTransactionStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTransactionStatus);
            setTransactionStatus(refVal_setTransactionStatus);
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
    if(val.has_field(utility::conversions::to_string_t(U("is_done"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_done")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsDone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsDone);
            setIsDone(refVal_setIsDone);
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
    if(val.has_field(utility::conversions::to_string_t(U("checkout_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("checkout_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCheckoutUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCheckoutUrl);
            setCheckoutUrl(refVal_setCheckoutUrl);
        }
    }
    return ok;
}

void GetOneTransaction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("order_id")), m_Order_id));
    }
    if(m_Method_of_paymentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("method_of_payment")), m_Method_of_payment));
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("amount")), m_Amount));
    }
    if(m_Amount_to_payIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("amount_to_pay")), m_Amount_to_pay));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("currency")), m_Currency));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_Transaction_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transaction_status")), m_Transaction_status));
    }
    if(m_ProductsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("products")), m_Products));
    }
    if(m_Is_doneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_done")), m_Is_done));
    }
    if(m_Is_escrowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_escrow")), m_Is_escrow));
    }
    if(m_Is_merchantIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_merchant")), m_Is_merchant));
    }
    if(m_Checkout_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("checkout_url")), m_Checkout_url));
    }
}

bool GetOneTransaction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("order_id"))))
    {
        utility::string_t refVal_setOrderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("order_id"))), refVal_setOrderId );
        setOrderId(refVal_setOrderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("method_of_payment"))))
    {
        std::vector<std::shared_ptr<Wallet>> refVal_setMethodOfPayment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("method_of_payment"))), refVal_setMethodOfPayment );
        setMethodOfPayment(refVal_setMethodOfPayment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("amount"))))
    {
        int32_t refVal_setAmount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("amount"))), refVal_setAmount );
        setAmount(refVal_setAmount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("amount_to_pay"))))
    {
        int32_t refVal_setAmountToPay;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("amount_to_pay"))), refVal_setAmountToPay );
        setAmountToPay(refVal_setAmountToPay);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("currency"))))
    {
        utility::string_t refVal_setCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("currency"))), refVal_setCurrency );
        setCurrency(refVal_setCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        utility::string_t refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transaction_status"))))
    {
        std::shared_ptr<TransactionStatusEnum> refVal_setTransactionStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transaction_status"))), refVal_setTransactionStatus );
        setTransactionStatus(refVal_setTransactionStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("products"))))
    {
        std::vector<std::shared_ptr<ProductModel>> refVal_setProducts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("products"))), refVal_setProducts );
        setProducts(refVal_setProducts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_done"))))
    {
        bool refVal_setIsDone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_done"))), refVal_setIsDone );
        setIsDone(refVal_setIsDone);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("checkout_url"))))
    {
        utility::string_t refVal_setCheckoutUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("checkout_url"))), refVal_setCheckoutUrl );
        setCheckoutUrl(refVal_setCheckoutUrl);
    }
    return ok;
}

utility::string_t GetOneTransaction::getOrderId() const
{
    return m_Order_id;
}

void GetOneTransaction::setOrderId(const utility::string_t& value)
{
    m_Order_id = value;
    m_Order_idIsSet = true;
}

bool GetOneTransaction::orderIdIsSet() const
{
    return m_Order_idIsSet;
}

void GetOneTransaction::unsetOrder_id()
{
    m_Order_idIsSet = false;
}
std::vector<std::shared_ptr<Wallet>>& GetOneTransaction::getMethodOfPayment()
{
    return m_Method_of_payment;
}

void GetOneTransaction::setMethodOfPayment(const std::vector<std::shared_ptr<Wallet>>& value)
{
    m_Method_of_payment = value;
    m_Method_of_paymentIsSet = true;
}

bool GetOneTransaction::methodOfPaymentIsSet() const
{
    return m_Method_of_paymentIsSet;
}

void GetOneTransaction::unsetMethod_of_payment()
{
    m_Method_of_paymentIsSet = false;
}
int32_t GetOneTransaction::getAmount() const
{
    return m_Amount;
}

void GetOneTransaction::setAmount(int32_t value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool GetOneTransaction::amountIsSet() const
{
    return m_AmountIsSet;
}

void GetOneTransaction::unsetAmount()
{
    m_AmountIsSet = false;
}
int32_t GetOneTransaction::getAmountToPay() const
{
    return m_Amount_to_pay;
}

void GetOneTransaction::setAmountToPay(int32_t value)
{
    m_Amount_to_pay = value;
    m_Amount_to_payIsSet = true;
}

bool GetOneTransaction::amountToPayIsSet() const
{
    return m_Amount_to_payIsSet;
}

void GetOneTransaction::unsetAmount_to_pay()
{
    m_Amount_to_payIsSet = false;
}
utility::string_t GetOneTransaction::getCurrency() const
{
    return m_Currency;
}

void GetOneTransaction::setCurrency(const utility::string_t& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool GetOneTransaction::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void GetOneTransaction::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
utility::string_t GetOneTransaction::getCreatedAt() const
{
    return m_Created_at;
}

void GetOneTransaction::setCreatedAt(const utility::string_t& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}

bool GetOneTransaction::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void GetOneTransaction::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
std::shared_ptr<TransactionStatusEnum> GetOneTransaction::getTransactionStatus() const
{
    return m_Transaction_status;
}

void GetOneTransaction::setTransactionStatus(const std::shared_ptr<TransactionStatusEnum>& value)
{
    m_Transaction_status = value;
    m_Transaction_statusIsSet = true;
}

bool GetOneTransaction::transactionStatusIsSet() const
{
    return m_Transaction_statusIsSet;
}

void GetOneTransaction::unsetTransaction_status()
{
    m_Transaction_statusIsSet = false;
}
std::vector<std::shared_ptr<ProductModel>>& GetOneTransaction::getProducts()
{
    return m_Products;
}

void GetOneTransaction::setProducts(const std::vector<std::shared_ptr<ProductModel>>& value)
{
    m_Products = value;
    m_ProductsIsSet = true;
}

bool GetOneTransaction::productsIsSet() const
{
    return m_ProductsIsSet;
}

void GetOneTransaction::unsetProducts()
{
    m_ProductsIsSet = false;
}
bool GetOneTransaction::isIsDone() const
{
    return m_Is_done;
}

void GetOneTransaction::setIsDone(bool value)
{
    m_Is_done = value;
    m_Is_doneIsSet = true;
}

bool GetOneTransaction::isDoneIsSet() const
{
    return m_Is_doneIsSet;
}

void GetOneTransaction::unsetIs_done()
{
    m_Is_doneIsSet = false;
}
bool GetOneTransaction::isIsEscrow() const
{
    return m_Is_escrow;
}

void GetOneTransaction::setIsEscrow(bool value)
{
    m_Is_escrow = value;
    m_Is_escrowIsSet = true;
}

bool GetOneTransaction::isEscrowIsSet() const
{
    return m_Is_escrowIsSet;
}

void GetOneTransaction::unsetIs_escrow()
{
    m_Is_escrowIsSet = false;
}
bool GetOneTransaction::isIsMerchant() const
{
    return m_Is_merchant;
}

void GetOneTransaction::setIsMerchant(bool value)
{
    m_Is_merchant = value;
    m_Is_merchantIsSet = true;
}

bool GetOneTransaction::isMerchantIsSet() const
{
    return m_Is_merchantIsSet;
}

void GetOneTransaction::unsetIs_merchant()
{
    m_Is_merchantIsSet = false;
}
utility::string_t GetOneTransaction::getCheckoutUrl() const
{
    return m_Checkout_url;
}

void GetOneTransaction::setCheckoutUrl(const utility::string_t& value)
{
    m_Checkout_url = value;
    m_Checkout_urlIsSet = true;
}

bool GetOneTransaction::checkoutUrlIsSet() const
{
    return m_Checkout_urlIsSet;
}

void GetOneTransaction::unsetCheckout_url()
{
    m_Checkout_urlIsSet = false;
}
}
}
}
}


