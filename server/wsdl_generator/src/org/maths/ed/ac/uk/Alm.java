package org.maths.ed.ac.uk;

public interface Alm {

	public OptimizePortfolioSSDReturn optimizePortfolioSSD(SymbolSet symbols,String benchmarkSymbol,java.util.Date start,java.util.Date end);
	public OptimizePortfolioMADReturn optimizePortfolioMAD(SymbolSet symbols,java.util.Date start,java.util.Date end);
}
