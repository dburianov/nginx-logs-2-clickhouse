#############

map $locadsloggable $adsloggable {
    ~^[123] 1;
    default 0;
}

map $host $logtime { # Определяем переменную $time
	default '1970-01-01 00:00:00';
}
map http_user_agent $http_user_agent_map {
    "" "EMPTY_UA";
    default $http_user_agent;
}
map $upstream_connect_time $upstream_connect_time_map {
    "" 0.0;
    default $upstream_connect_time;
}
map $upstream_header_time $upstream_header_time_map {
    "" 0.0;
    default $upstream_header_time;
}
map $upstream_cache_status $upstream_cache_status_map {
    "" "NOCACHE";
    default $upstream_cache_status;
}
map $upstream_addr $upstream_addr_map {
    "" "127.0.0.1";
    default $upstream_addr;
}
map $upstream_status $upstream_status_map {
    "" 0;
    default $upstream_status;
}
map $upstream_response_time $upstream_response_time_map {
    "" 0;
    default $upstream_response_time;
}
map $gzip_ratio $gzip_ratio_map {
    "" 0.0;
    default $gzip_ratio;
}
map $cookie_xreferer $cookie_xreferer_map {
    "" "NO_XREFERER";
    default $cookie_xreferer;
}
map $http_x_forwarded_for $http_x_forwarded_for_map {
    "" "NO_XFORWARDEDFOR";
    default $http_x_forwarded_for;
}
map $remote_user $remote_user_map {
    "" "NO_REMOTEUSER";
    default $remote_user;
}
map $http_referer $http_referer_map {
    "" "NO_REFERER";
    default $http_referer;
}
map $cookie_xusertoken $cookie_xusertoken_map {
    "" "NO_XUSERTOKEN";
    default $cookie_xusertoken;
}
map $geoip_country_code $geoip_country_code_map {
    "" "NO_COUNTRY";
    default $geoip_country_code;
}
map $http_range $http_range_map {
    "" "NO_RANGE";
    default $http_range;
}
