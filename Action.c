Action()
{

	lr_start_transaction("1_AOS_Home");
	
	web_set_user("admin", 
		lr_unmask("62fb32d3f69e4bd319"), 
		"nimbusserver.aos.com:8002");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=nimbusserver.aos.com");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("nimbusserver.aos.com:8000", 
		"URL={AOS_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3201", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3202", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("ALL", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.602938919.1660629292; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gid=GA1.2.1051045871.1660629292; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gat=1; DOMAIN=nimbusserver.aos.com");

	web_url("popularProducts.json", 
		"URL={AOS_URL}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL={AOS_URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(11);

	lr_end_transaction("1_AOS_Home",LR_AUTO);

	lr_start_transaction("2_Login");

	web_custom_request("AccountLoginRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>adm1n</loginPassword><loginUser>admin</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("166703779", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

/*Correlation comment - Do not change!  Original value='D82539505C816E8D9E6B44E9EF6E1E80' Name ='sessionId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);

	web_url("166703779_2", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("2_Login",LR_AUTO);

	lr_think_time(41);

	lr_start_transaction("3_Search_Items");

	web_url("products", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/3/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL={AOS_URL}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_url("all_data", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("17", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/products/17", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL={AOS_URL}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("3_Search_Items",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("4_Add_To_Cart");

	web_custom_request("414141", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779/product/17/color/414141?quantity=2", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("414141_2",
		"Action=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779/product/17/color/414141?quantity=2",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={AOS_URL}/",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);

	lr_end_transaction("4_Add_To_Cart",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("5_Checkout");

	web_url("166703779_3", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL={AOS_URL}/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountByIdRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>166703779</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>166703779</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("166703779_4", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/shippingcost/", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost_2",
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/shippingcost/",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={AOS_URL}/",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body={\"seaddress\":{\"addressLine1\":\"address\",\"addressLine2\":\"\",\"city\":\"New York\",\"country\":\"us\",\"postalCode\":10017,\"state\":\"NY\"},\"secustomerName\":\"John Smith\",\"secustomerPhone\":\"480-222-1111\",\"senumberOfProducts\":2,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}",
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>166703779</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("orderPayment-page.html", 
		"URL={AOS_URL}/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetCountriesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("5_Checkout",LR_AUTO);

	lr_think_time(91);

	lr_start_transaction("6_Payment");

	web_custom_request("166703779_5", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/orders/users/166703779", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("166703779_6", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/orders/users/166703779", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"480-222-1111\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"Adm1n\",\""
		"Transaction_SafePay_UserName\":\"admin\",\"Transaction_TransactionDate\":\"16082022\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"address\",\"Shipping_Address_City\":\"New York\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"John Smith\",\"Shipping_Address_CustomerPhone\":\"480-222-1111\",\"Shipping_Address_PostalCode\":10017,\"Shipping_Address_State\":\"NY\",\"Shipping_Cost\":2558,\"Shipping_NumberOfProducts\":2,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":17,\"quantity\":2,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("166703779_7", 
		"URL=http://nimbusserver.aos.com:8002/order/api/v1/carts/166703779", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("6_Payment",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("7_Logout");

	web_custom_request("AccountLogoutRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/AccountLogoutRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={AOS_URL}/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AccountLogoutRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>166703779</loginUser><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("7_Logout",LR_AUTO);

	return 0;
}