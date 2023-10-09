-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 06, 2023 at 07:35 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `all_task`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `cnm` int(11) NOT NULL,
  `cname` varchar(50) NOT NULL,
  `city` varchar(30) NOT NULL,
  `ratting` int(11) NOT NULL,
  `sno` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`cnm`, `cname`, `city`, `ratting`, `sno`) VALUES
(201, 'hoffman', 'london', 100, 1001),
(202, 'giovanee', 'roe', 200, 1003),
(203, 'liu', 'san jose', 300, 1002),
(204, 'grass', 'barcelona', 300, 1007),
(205, 'pereira', 'reo', 100, 1004);

-- --------------------------------------------------------

--
-- Table structure for table `employe`
--

CREATE TABLE `employe` (
  `emp_id` int(11) NOT NULL,
  `first name` varchar(30) NOT NULL,
  `last name` varchar(30) NOT NULL,
  `salary` int(11) NOT NULL,
  `joineing_date` date NOT NULL,
  `department` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employe`
--

INSERT INTO `employe` (`emp_id`, `first name`, `last name`, `salary`, `joineing_date`, `department`) VALUES
(1, 'john', 'abraham', 1000000, '2013-01-01', 'banking'),
(2, 'michael', 'clarke', 800000, '2013-01-01', 'insurence'),
(3, 'roy', 'thomas', 700000, '2013-01-01', 'banking'),
(4, 'tom', 'jose', 600000, '2013-02-01', 'insurance'),
(5, 'jery', 'pinto', 650000, '2013-02-01', 'insurence'),
(6, 'philip', 'mathew', 750000, '2013-01-01', 'service'),
(1, 'john', 'abraham', 1000000, '2013-01-01', 'banking'),
(2, 'michael', 'clarke', 800000, '2013-01-01', 'insurence'),
(3, 'roy', 'thomas', 700000, '2013-01-01', 'banking'),
(4, 'tom', 'jose', 600000, '2013-02-01', 'insurance'),
(5, 'jery', 'pinto', 650000, '2013-02-01', 'insurence'),
(6, 'philip', 'mathew', 750000, '2013-01-01', 'service'),
(7, 'TestName1', '123', 650000, '2013-01-01', 'servic'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01', 'insurance');

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `s_code` varchar(30) DEFAULT NULL,
  `mark` int(11) DEFAULT NULL,
  `p_code` varchar(30) DEFAULT NULL,
  `roll_num` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`s_code`, `mark`, `p_code`, `roll_num`) VALUES
('cs11', 50, 'cs', 1),
('cs12', 60, 'cs', 2),
('ec101', 66, 'ec', 3),
('ec102', 70, 'ec', 1),
('ec101', 45, 'ec', 2),
('ec102', 50, 'ec', 3);

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `employe_ref_id` int(11) DEFAULT NULL,
  `Incentive_date` varchar(20) DEFAULT NULL,
  `Incentive_amount` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`employe_ref_id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, '2013-02-01', '5000'),
(2, '2013-02-01', '3000'),
(3, '2013-02-01', '4000'),
(1, '2013-01-01', '4500'),
(2, '2013-01-01', '3500');

-- --------------------------------------------------------

--
-- Table structure for table `people`
--

CREATE TABLE `people` (
  `first name` varchar(20) DEFAULT NULL,
  `Last name` varchar(20) DEFAULT NULL,
  `Address` varchar(50) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `age` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `people`
--

INSERT INTO `people` (`first name`, `Last name`, `Address`, `city`, `age`) VALUES
('mickey', 'mouse', '123 fantasy way', 'anaheim', 73),
('bat', 'man', '321 cavem ave', 'gotham', 54),
('wonder', 'woman', '987 truth way', 'paradise', 39),
('donald', 'duck', '555 quack street', 'mallard', 65),
('bugs', 'bunny', '567 carrot street', 'rascal', 58),
('wiley', 'coyote', '999 acme way', 'hairball', 32),
('cat', 'woman', '234 purrfect street', 'hairball', 32),
('tweety', 'bird', '543', 'itoltaw', 28);

-- --------------------------------------------------------

--
-- Table structure for table `salesperson`
--

CREATE TABLE `salesperson` (
  `sno` int(11) NOT NULL,
  `sname` varchar(50) NOT NULL,
  `city` varchar(30) NOT NULL,
  `comm` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesperson`
--

INSERT INTO `salesperson` (`sno`, `sname`, `city`, `comm`) VALUES
(1001, 'peel', 'london', 12),
(1002, 'serres', 'san joes', 13),
(1004, 'motika', 'london', 11),
(1001, 'peel', 'london', 12),
(1002, 'serres', 'san joes', 13),
(1004, 'motika', 'london', 11),
(1007, 'rafkin', 'barcelona', 15),
(1003, 'axelord', 'new york', 1);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `roll_num` int(11) NOT NULL,
  `name` varchar(30) DEFAULT NULL,
  `branch` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`roll_num`, `name`, `branch`) VALUES
(1, 'vijay', 'computer science'),
(2, 'suhani', 'eletronic & com'),
(3, 'Kriti', 'eletronic & com');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `exam`
--
ALTER TABLE `exam`
  ADD KEY `roll_num` (`roll_num`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`roll_num`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `roll_num` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `exam`
--
ALTER TABLE `exam`
  ADD CONSTRAINT `exam_ibfk_1` FOREIGN KEY (`roll_num`) REFERENCES `student` (`roll_num`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
