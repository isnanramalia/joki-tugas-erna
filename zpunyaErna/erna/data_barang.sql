-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 23, 2018 at 04:53 AM
-- Server version: 10.1.30-MariaDB
-- PHP Version: 5.6.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `data_barang`
--

-- --------------------------------------------------------

--
-- Table structure for table `data_barang`
--

CREATE TABLE `data_barang` (
  `id_pakaian` varchar(10) NOT NULL,
  `nama_barang` varchar(20) NOT NULL,
  `harga_satuan` varchar(10) NOT NULL,
  `tgl_masuk` date NOT NULL,
  `jumlah_stok` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `data_barang`
--

INSERT INTO `data_barang` (`id_pakaian`, `nama_barang`, `harga_satuan`, `tgl_masuk`, `jumlah_stok`) VALUES
('01-001', 'kemeja', '170.475', '2018-01-23', 35),
('01-002', 'kaos', '49.975', '2018-01-23', 50),
('01-003', 'mangset', '24.900', '2018-01-23', 30),
('01-004', 'celana jeans', '94.500', '2018-01-23', 20),
('01-005', 'celana bahan', '84.425', '2018-01-23', 30),
('01-006', 'legging', '19.900', '2018-01-23', 45),
('01-007', 'rok', '49.875', '2018-01-23', 25),
('01-008', 'dress', '105.750', '2018-01-23', 45),
('01-009', 'daster', '25.450', '2018-01-23', 45),
('01-010', 'gamis', '149.800', '2018-01-23', 50),
('01-011', 'krudung', '34.875', '2018-01-23', 50),
('01-012', 'ciput', '19.450', '2018-01-23', 40);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `data_barang`
--
ALTER TABLE `data_barang`
  ADD PRIMARY KEY (`id_pakaian`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
