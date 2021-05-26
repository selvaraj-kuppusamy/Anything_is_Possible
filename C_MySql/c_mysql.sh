#!/bin/sh

#upgrade the system
echo "Your! system is upgrading!..."
sudo apt -y upgrade
#update the system
echo "Your! system is updating!..."
sudo apt -y update
#c complier install
echo "c complier installing!......"
sudo apt install -y gcc
#c and mysql connecting libraries install
echo "c and mysql connecting libraries installing!..."
sudo apt install -y libmysqlclient-dev
echo "Connect C with MYSQL Database packages installed  Successfully!."

