cp ./Debug/libAlm.so /usr/lib/axis2/services/Alm/. 
cp services.xml /usr/lib/axis2/services/Alm/. 
cp ../wsdl_generator/wsdl/Alm.wsdl /usr/lib/axis2/services/Alm/. 
sudo /etc/init.d/apache2 restart
