package org.maths.ed.ac.uk;

public abstract class OptimizePortfolioSSDReturn {
	public int resultCode;
	public double[] portfolioRatio;
	public double expReturn;
	
	public abstract void setResultCode(int ret);
	public abstract void setPortfolioRatio(double[] ratio);
	public abstract void setExpReturn(double ret);
	public abstract int getResultCode();
	public abstract double[] getPortfolioRatio();
	public abstract double getExpReturn();
	
}
