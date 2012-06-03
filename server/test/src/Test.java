import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.net.URLConnection;
import java.security.SecureRandom;
import java.security.cert.X509Certificate;
import java.util.Properties;

import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSession;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

public class Test {

	public static void main(String[] args) {
		
		Properties systemProperties = System.getProperties();
		systemProperties.setProperty( "http.proxyHost", "proxyserver" );
		systemProperties.setProperty( "http.proxyPort", "8080" );
		systemProperties.setProperty( "http.proxyHost", "proxyserver" );
		systemProperties.setProperty( "http.proxyPort", "8080" );

		System.setProperty("https.proxyHost", "proxy.xxx.com");
		System.setProperty("https.proxyPort", "8888");

		try {

			SSLContext sslContext = SSLContext.getInstance("SSL");

			// set up a TrustManager that trusts everything
			sslContext.init(null, new TrustManager[] { new X509TrustManager() {
				public X509Certificate[] getAcceptedIssuers() {
					System.out.println("getAcceptedIssuers =============");
					return null;
				}

				public void checkClientTrusted(X509Certificate[] certs,
						String authType) {
					System.out.println("checkClientTrusted =============");
				}

				public void checkServerTrusted(X509Certificate[] certs,
						String authType) {
					System.out.println("checkServerTrusted =============");
				}
			} }, new SecureRandom());

			HttpsURLConnection.setDefaultSSLSocketFactory(sslContext
					.getSocketFactory());

			HttpsURLConnection.setDefaultHostnameVerifier(new HostnameVerifier(){
						public boolean verify(String arg0, SSLSession arg1) {
							System.out
									.println("hostnameVerifier =============");
							return true;
						}
					});

			URL url = new URL("https://www.verisign.net");
			URLConnection conn = url.openConnection();
			BufferedReader reader = new BufferedReader(new InputStreamReader(
					conn.getInputStream()));
			String line;
			while ((line = reader.readLine()) != null) {
				System.out.println(line);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}