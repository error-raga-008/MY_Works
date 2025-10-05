<?xml version="1.0"?>
	
	<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
		<xsl:template match="/">
			<html>
				<body>
					<h2>emp wiht salar</h2>
					<ul>
						<xsl:for-each select="detail/emp">
								<xsl:sort select="sala" order="ascending" data-type="number"/>
								<li>
									<xsl:value-of select="name"/>-
									<xsl:value-of select="sala"/>
								</li>
						</xsl:for-each>
					</ul>
				</body>
			</html>
		</xsl:template>
	</xsl:stylesheet>
