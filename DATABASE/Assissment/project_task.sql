-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 31, 2023 at 05:09 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `project_task`
--

-- --------------------------------------------------------

--
-- Table structure for table `city`
--

CREATE TABLE `city` (
  `id` int(11) NOT NULL,
  `city_name` varchar(30) DEFAULT NULL,
  `lat` varchar(20) DEFAULT NULL,
  `logn` varchar(30) DEFAULT NULL,
  `country_id` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `city`
--

INSERT INTO `city` (`id`, `city_name`, `lat`, `logn`, `country_id`) VALUES
(1, 'Berlin', '52.520008', '13.404954', '1'),
(2, 'Belgrade', '44.787197', '20.457273', '2'),
(3, 'Zagred', '45.815399', '15.966568', '3'),
(4, 'New York', '40.730610', '-73.935254', '4'),
(5, 'Los Angeles', '34.0522235', '-118.243683', '4'),
(6, 'Warsaw', '52.237049', '21.017532', '5');

-- --------------------------------------------------------

--
-- Table structure for table `country`
--

CREATE TABLE `country` (
  `id` int(11) NOT NULL,
  `country_name` char(30) NOT NULL,
  `Country_name_eng` varchar(30) NOT NULL,
  `country_code` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `country`
--

INSERT INTO `country` (`id`, `country_name`, `Country_name_eng`, `country_code`) VALUES
(1, 'Deutschland', 'Germany', 'DEU'),
(2, 'Srbija', 'Serbia', 'SRB'),
(3, 'Hrvatska', 'Croatia', 'HRV'),
(4, 'United States of America', 'United States of America', 'USA'),
(5, 'Polska', 'Poland', 'POL'),
(6, 'Espana', 'Spain', 'ESP'),
(7, 'Deutschland', 'Germany', 'DEU'),
(8, 'Srbija', 'Serbia', 'SRB'),
(9, 'Hrvatska', 'Croatia', 'HRV'),
(10, 'United States of America', 'United States of America', 'USA'),
(11, 'Polska', 'Poland', 'POL'),
(12, 'Espana', 'Spain', 'ESP'),
(13, 'Deutschland', 'Germany', 'DEU'),
(14, 'Srbija', 'Serbia', 'SRB'),
(15, 'Hrvatska', 'Croatia', 'HRV'),
(16, 'United States of America', 'United States of America', 'USA'),
(17, 'Polska', 'Poland', 'POL'),
(18, 'Espana', 'Spain', 'ESP'),
(19, 'Rossiya', 'Russia', 'RUS');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `id` int(11) NOT NULL,
  `customer_name` varchar(30) DEFAULT NULL,
  `city_id` int(11) DEFAULT NULL,
  `customer_address` varchar(50) DEFAULT NULL,
  `next_call_date` varchar(30) DEFAULT NULL,
  `ts_inserted` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`id`, `customer_name`, `city_id`, `customer_address`, `next_call_date`, `ts_inserted`) VALUES
(1, 'Jewelry Store', 4, 'Long Street 120', '2020-01-21', '2020-01-09 14:01:20.000'),
(2, 'Bakery', 1, 'Kurfurstendamm 25', '2020-02-21', '2020-01-09 17:52:15.000'),
(3, 'Cafe', 1, 'TauentzienstraBe 44', '2020-01-21', '2020-01-10 08:02:49.000'),
(4, 'Restaurant', 3, 'Ulica lipa 15', '2020-01-21', '2020-01-10 09:20:21.000');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `city`
--
ALTER TABLE `city`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `country`
--
ALTER TABLE `country`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`id`),
  ADD KEY `city_id` (`city_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `country`
--
ALTER TABLE `country`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=20;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `customer`
--
ALTER TABLE `customer`
  ADD CONSTRAINT `customer_ibfk_1` FOREIGN KEY (`city_id`) REFERENCES `city` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
