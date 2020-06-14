		<Page
			Location='28,426'
			MinimumSize='356,135'
			Name='Questpopup'
			PackSize='p,p'
			RStyleDefault='rs_default'
			ScrollExtent='356,186'
			Size='356,186'
			StickyVisible='true'
			UserMovable='true'
			Visible='false'
		>
			<Data
				buttonclose='bg.mmc.close'
				buttonOk='comp.info.buttonOK'
				info='comp.info.text'
				Name='CodeData'
				StickyVisible='true'
				title='comp.vP.lbl'
				viewer='comp.vP.viewer'
			/>
			<Composite
				BackgroundColor='#FFFFFF'
				Location='12,22'
				Name='comp'
				OnEnable='parent.compBg.size=size
		parent.compBg.location=location'
				Orientation='Horizontal'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				Padding='Both'
				ScrollExtent='325,158'
				Size='325,158'
				Spacing='3'
				SpacingType='Fill'
			>
				<Page
					BackgroundTint='#1CFFFF'
					Location='1,14'
					MinimumSize='175,103'
					Name='vP'
					PackSize='f,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='175,138'
					Size='175,138'
				>
					<Text
						BackgroundTint='#000000'
						Font='bold_13'
						LocalText='xxx'
						Location='0,-1'
						MinimumSize='0,19'
						Name='lbl'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						PalText='text1'
						RStyleDefault='rs_default'
						ScrollExtent='175,19'
						Size='175,19'
						TextColor='#96F4FC'
					>xxx</Text>
					<CuiWidget3dObjectListViewer
						BackgroundColor='#FFFFFF'
						BackgroundTint='#00D6FB'
						CameraPitch='0.5'
						defaultrotatespeed='0'
						Dragable='true'
						DragAccepts='gameobject'
						dragRemoveObject='false'
						headshot='true'
						lightambientcolor='#aaaaaa'
						Location='0,59'
						mousedraggable='false'
						Name='Viewer'
						ObjectOriginOffsetY='-1.0'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.viewer.rs_default'
						ScrollExtent='175,72'
						Size='175,72'
					/>
					<Page
						Location='0,17'
						Name='bg'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='175,121'
						Size='175,121'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.70'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='frame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='175,121'
							Size='175,121'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.60'
							BackgroundTint='#00D6FB'
							Location='2,2'
							Name='inFrame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
							ScrollExtent='170,118'
							Size='170,118'
						/>
					</Page>
				</Page>
				<Page
					BackgroundColor='#FF0000'
					Location='179,17'
					Name='info'
					PackSize='f,a'
					ScrollExtent='144,138'
					Size='144,138'
				>
					<Text
						BackgroundTint='#000000'
						Font='bold_13'
						LocalText='text'
						MinimumSize='0,19'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalText='text1'
						RStyleDefault='rs_default'
						ScrollExtent='129,110'
						Size='129,110'
						TextColor='#96F4FC'
					>text</Text>
					<Scrollbar
						Control='text'
						Enabled='false'
						Location='130,5'
						Name='scroll'
						OnDisable='opacity=0.0'
						OnEnable='opacity=1.0'
						PackLocation='fff,nfn'
						PackSize='f,a'
						ScrollExtent='11,110'
						Size='11,110'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<Button
						IsCancelButton='true'
						IsDefaultButton='true'
						LocalText='[@done]'
						Location='37,116'
						MinimumSize='0,19'
						Name='buttonOk'
						OpacityRelativeMin='0.70'
						PackLocation='fff,fff'
						PackSize='p,f'
						ScrollExtent='106,19'
						Size='106,19'
						Style='/Styles.New.buttons.hud.style'
					>@done</Button>
				</Page>
			</Composite>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='356,186'
				Size='356,186'
			>
				<Page
					BackgroundColor='#FFFFFF'
					labelInstantSale.visible='false'
					Location='342,5'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc2.rs_default'
					ScrollExtent='14,14'
					Size='14,14'
					textboxInstantSale.enabled='false'
				>
					<Button
						BackgroundTint='#27BECB'
						DragType='uicommand'
						Location='12,1'
						Name='min'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalBgTint='accentlight'
						ScrollExtent='13,12'
						Size='13,12'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Button
						BackgroundColor='#FFFFFF'
						IsCancelButton='true'
						Name='close'
						OnHide='parent.dark.visible=false'
						OnShow='parent.dark.visible=true'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='14,14'
						Size='14,14'
						Style='/Styles.Frame.buttonCloseDark.style'
					></Button>
					<Button
						BackgroundTint='#27BECB'
						DragType='uicommand'
						Location='13,0'
						Name='max'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalBgTint='accentlight'
						ScrollExtent='13,12'
						Size='13,12'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Page
						Location='-5,0'
						Name='dark'
						PackLocation='fff,cfc'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='20,14'
						Size='20,14'
					/>
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
					ScrollExtent='356,186'
					Selectable='true'
					Size='356,186'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='356,186'
						Size='356,186'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,164'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='280,22'
							Size='280,22'
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
								ScrollExtent='280,9'
								Size='280,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='98,164'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='258,22'
							Size='258,22'
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
								ScrollExtent='258,9'
								Size='258,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='98,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='258,22'
							Size='258,22'
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
								ScrollExtent='258,9'
								Size='258,9'
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
							ScrollExtent='280,22'
							Size='280,22'
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
								ScrollExtent='280,9'
								Size='280,9'
							/>
						</Page>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						Location='-1,0'
						Name='top'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_TR.rs_default'
						ScrollExtent='357,29'
						Size='357,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,163'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='356,23'
						Size='356,23'
					/>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='0,7'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='356,173'
					Selectable='true'
					Size='356,173'
				/>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='356,186'
					Selectable='true'
					Size='356,186'
				/>
			</Page>
		</Page>