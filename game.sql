CREATE DATABASE IF NOT EXISTS wdcoverflow;
USE wdcoverflow;

CREATE TABLE Orders (
    order_id INT,
    trip INT,
    game INT
);

CREATE TABLE User's search (
    order_id INT,
    order_history INT,
    user_info
);

CREATE TABLE Orders history (
    sequence INT,
    invoices INT,
    timestamps INT
);

CREATE TABLE User Info (
    user_info INT,
    given_name INT,
    family_name INT,
    phone_number INT
);

CREATE TABLE Addresses (
    user INT,
    street INT,
    city INT,
    country INT,
    postcode INT
);

CREATE TABLE Games (
    game_id INT,
    name VARCHAR(50),
    description VARCHAR(50),
    features INT,
    price_id INT,
    quantity INT,
    platform_id INT,
    genre_id INT
);

CREATE TABLE Price (
    price_id INT,
    price_amount FLOAT,
    price_status VARCHAR(50),
);

CREATE TABLE Features (
    features_id INT,
    features_names VARCHAR(50),
);

CREATE TABLE Platform (
    platform_id INT,
    platform_type VARCHAR(50),
);