<?xml version="1.0"?>
	
	<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
		<xsl:template match="/">
		
			<html>
				<body>
					<table>
						<tr>
							<th>wow</th>
							<th>dam</th>
						</tr>
						<xsl:for-each select="shop/order">
							<xsl:sort select="prc" data-type="number" order="descending"/>
							<xsl:if test="prc&gt;100">
								<tr>
									<td><xsl:value-of select="name"/></td>
									<td><xsl:value-of select="qty * prc"/></td>
								</tr>
							</xsl:if>
						</xsl:for-each>
					</table>
				</body>
			</html>	
			
		</xsl:template>
	</xsl:stylesheet>
