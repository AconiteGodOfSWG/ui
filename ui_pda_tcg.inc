		<Page
			Location='4,24'
			MinimumSize='1000,720'
			Name='Tcg'
			ScrollExtent='1016,720'
			Size='1016,720'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				buttonclose='bg.mmc.close'
				caption='bg.caption.text'
				Name='CodeData'
				tcgImage='tcgControlParent.tcgImage'
				tcgImageContext='tcgControlParent.tcgImageContext'
			/>
			<Page
				Location='4,22'
				Name='tcgControlParent'
				PackSize='a,a'
				ScrollExtent='1010,694'
				Selectable='true'
				Size='1010,694'
			>
				<Image
					Name='tcgImage'
					PackSize='a,a'
					ScrollExtent='1010,694'
					Size='1010,694'
					SourceRect='0,0,64,64'
					SourceResource='tcg'
				/>
				<Image
					Name='tcgImageContext'
					PackSize='a,a'
					ScrollExtent='206,138'
					Size='206,138'
					SourceRect='0,0,128,128'
					SourceResource='tcgcontext'
					Visible='false'
				/>
			</Page>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='1016,720'
				Size='1016,720'
			>
				<Page
					Location='1002,8'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='16,10'
					Size='16,10'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						IsCancelButton='true'
						Location='0,-3'
						Name='close'
						OpacityRelativeMin='1.00'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='16,16'
						Size='16,16'
						Style='/Styles.Frame.buttonClose.style'
					></Button>
				</Page>
				<Page
					MinimumSize='0,19'
					Name='caption'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='866,19'
					Size='866,19'
				>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='STAR WARS GALAXIES TRADING CARD GAME'
						Margin='6,0,0,3'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						OpacityRelativeMin='0.80'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='866,19'
						Size='866,19'
						TextAlignmentVertical='Bottom'
						TextCapital='true'
						TextColor='#00354F'
					>STAR WARS GALAXIES TRADING CARD GAME</Text>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='1,0'
					Name='frame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='baselight'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='1015,720'
					Selectable='true'
					Size='1015,720'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='1015,720'
						Size='1015,720'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,698'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='790,22'
							Size='790,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
								ScrollExtent='790,9'
								Size='790,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='285,698'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='730,22'
							Size='730,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
								ScrollExtent='730,9'
								Size='730,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='285,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='730,22'
							Size='730,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
								ScrollExtent='730,9'
								Size='730,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Name='outlineTL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,nfn'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='790,22'
							Size='790,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
								ScrollExtent='790,9'
								Size='790,9'
							/>
						</Page>
					</Page>
					<Page
						BackgroundColor='#1FE6F5'
						BackgroundOpacity='1.00'
						BackgroundTint='#1FE6F5'
						Location='-1,0'
						Name='top'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						PalBgTint='titleBar'
						RStyleDefault='main_TR.rs_default'
						ScrollExtent='1016,29'
						Size='1016,29'
					/>
					<Page
						BackgroundColor='#1FE6F5'
						BackgroundOpacity='1.00'
						BackgroundTint='#1FE6F5'
						Location='0,697'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						PalBgTint='bottomBar'
						RStyleDefault='main_BR.rs_default'
						ScrollExtent='1015,23'
						Size='1015,23'
					/>
					<Namespace
						Name='main_TR'
						Size='128,64'
					>
						<RectangleStyle
							Center='default.c'
							East='default.e'
							Name='rs_default'
							West='default.w'
						/>
						<Namespace
							Name='default'
						>
							<ImageStyle
								Name='e'
								Source='ui_rebel_final'
								SourceRect='291,263,438,290'
							/>
							<ImageStyle
								Name='w'
								Source='ui_rebel_final'
								SourceRect='277,263,291,290'
							/>
							<ImageStyle
								Name='c'
								Source='ui_rebel_final'
								SourceRect='290,263,291,290'
							/>
						</Namespace>
					</Namespace>
					<Namespace
						Name='main_BR'
						Size='128,64'
					>
						<RectangleStyle
							Center='default.c'
							East='default.e'
							Name='rs_default'
							West='default.w'
						/>
						<Namespace
							Name='default'
						>
							<ImageStyle
								Name='e'
								Source='ui_rebel_final'
								SourceRect='421,299,438,324'
							/>
							<ImageStyle
								Name='w'
								Source='ui_rebel_final'
								SourceRect='395,299,414,324'
							/>
							<ImageStyle
								Name='c'
								Source='ui_rebel_final'
								SourceRect='416,299,417,324'
							/>
						</Namespace>
					</Namespace>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='0,5'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='1016,712'
					Selectable='true'
					Size='1016,712'
				/>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back1'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='1016,720'
					Selectable='true'
					Size='1016,720'
				/>
			</Page>
		</Page>