		<Page
			Name='BuffBuilder'
			ScrollExtent='1026,767'
			Size='1026,767'
		>
			<Page
				Location='95,27'
				MaximumSize='651,700'
				MinimumSize='651,200'
				Name='Buffer'
				ScrollExtent='651,594'
				Size='651,594'
				UserMovable='true'
			>
				<Data
					buffeeList='all.Bottom.ListView'
					buffList='all.right.box.ListView'
					buffTree='all.Left.box.TreeView'
					buttonAccept='buttonAccept'
					buttonAdd='all.Right.buttonAdd'
					buttonCancel='buttonCancel'
					buttonClear='buttonClear'
					buttonclose='bg.mmc.close'
					buttonRemove='all.Right.buttonRemove'
					caption='bg.caption.text'
					coverChargeTextBox='all.right.paymenttextBox'
					labelComponentDescription='all.middle.labelComponentDescription'
					Name='CodeData'
					pointsLeft='all.right.dynamicPointsRemaining'
					recipientName='all.Right.dynamicRecipient'
					totalCost='all.right.dynamicTotalCost'
				/>
				<Page
					Location='8,32'
					Name='all'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='635,532'
					Selectable='true'
					Size='635,532'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						Location='11,302'
						Name='Middle'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='621,26'
						Size='621,26'
					>
						<Text
							Font='bold_13'
							Location='6,4'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelComponentDescription'
							PalText='header'
							ScrollExtent='602,19'
							Size='602,19'
							TextColor='#97FFFF'
						></Text>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						Location='9,332'
						Name='Bottom'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='621,193'
						Size='621,193'
					>
						<Scrollbar
							Control='ListView'
							Enabled='false'
							Location='606,10'
							MaximumSize='8,223'
							Name='scroll'
							ScrollExtent='8,175'
							Size='8,175'
							Style='/Styles.scrollbar.default.vHud4.style'
						>
						</Scrollbar>
						<DataSource
							Name='ListViewData'
						>
							<Data
								Name='foo'
								Text='fofofof'
							/>
							<Data
								Name='foo'
								Text='asdasdasd'
							/>
							<Data
								Name='foo'
								Text='fkfkfkfkfkkf'
							/>
							<Data
								Name='foo'
								Text='foobar'
							/>
						</DataSource>
						<List
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.00'
							DataSource='ListViewData'
							Location='9,9'
							MinimumScrollExtent='594,87'
							Name='ListView'
							RenderSeperatorLines='false'
							ScrollExtent='594,179'
							Selectable='false'
							SelectedRow='0'
							SelectedRowCount='1'
							SelectionAllowedMultiRow='false'
							Size='594,179'
							Style='/Styles.list.dark.style'
						/>
					</Page>
					<Page
						BackgroundTint='#00D6FB'
						Location='1,0'
						Name='Left'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						ScrollExtent='314,311'
						Size='314,311'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							Location='12,9'
							Name='box'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='291,287'
							Size='291,287'
						>
							<Scrollbar
								Control='TreeView'
								Enabled='false'
								Location='273,11'
								Name='scroll'
								ScrollExtent='12,272'
								Size='12,272'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
							<DataSourceContainer
								Name='TreeViewData'
							>
								<DataSourceContainer
									Expanded='false'
									Name='category1'
									Text='category1'
								>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
								</DataSourceContainer>
								<DataSourceContainer
									Expanded='false'
									Name='category2'
									Text='category2'
								>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
								</DataSourceContainer>
								<DataSourceContainer
									Expanded='false'
									Name='category3'
									Text='category3'
								>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
									<DataSourceContainer
										Expanded='false'
										Name='item'
										Text='xxx'
									/>
								</DataSourceContainer>
							</DataSourceContainer>
							<TreeView
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.00'
								DataSourceContainer='TreeViewData'
								Location='5,4'
								MinimumScrollExtent='263,63'
								Name='TreeView'
								ScrollExtent='263,280'
								SelectedRow='10'
								SelectedRowCount='1'
								SelectionAllowedMultiRow='false'
								Size='263,280'
								Style='/Styles.tree.style'
							/>
						</Page>
					</Page>
					<Page
						BackgroundTint='#00D6FB'
						Location='319,-2'
						MaximumSize='329,16384'
						Name='Right'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						ScrollExtent='320,306'
						Size='320,306'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							Location='68,9'
							Name='box'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='241,189'
							Size='241,189'
						>
							<List
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.00'
								DataSource='ListViewData'
								Location='9,9'
								MinimumScrollExtent='199,87'
								Name='ListView'
								ScrollExtent='199,200'
								Selectable='false'
								SelectionAllowedMultiRow='false'
								Size='199,200'
								Style='/Styles.list.dark.style'
							/>
							<DataSource
								Name='ListViewData'
							>
								<Data
									Name='foo'
									Text='fofofof'
								/>
								<Data
									Name='foo'
									Text='asdasdasd'
								/>
								<Data
									Name='foo'
									Text='fkfkfkfkfkkf'
								/>
								<Data
									Name='foo'
									Text='foobar'
								/>
							</DataSource>
							<Scrollbar
								Control='ListView'
								Enabled='false'
								Location='222,15'
								Name='scroll'
								ScrollExtent='12,191'
								Size='12,191'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
						</Page>
						<Text
							Font='bold_13'
							LocalText='[@ui_buffbuilder:recipient_name]'
							Location='3,209'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelRecipient'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextAlignment='Center'
							TextColor='#97FFFF'
						>@ui_buffbuilder:recipient_name</Text>
						<Text
							Font='bold_13'
							LocalText='SomeGuy'
							Location='151,209'
							MaxLines='1'
							MinimumSize='0,19'
							Name='dynamicRecipient'
							PalText='header'
							ScrollExtent='158,19'
							Size='158,19'
							TextColor='#97FFFF'
						>SomeGuy</Text>
						<Textbox
							BackgroundOpacity='0.70'
							BackgroundTint='#1CFFFF'
							Location='155,230'
							MaxLength='10'
							MinimumSize='0,19'
							Name='paymenttextBox'
							NumericInteger='true'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='102,24'
							Size='102,24'
							Style='/Styles.textbox.login.Style_13'
						>credits</Textbox>
						<Text
							Font='bold_13'
							LocalText='[@ui_buffbuilder:cover_charge]'
							Location='3,235'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelCoverCharge'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextAlignment='Center'
							TextColor='#97FFFF'
						>@ui_buffbuilder:cover_charge</Text>
						<Text
							Font='bold_13'
							LocalText='[@ui_buffbuilder:points_remaining]'
							Location='4,257'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelPointsRemaining'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextAlignment='Center'
							TextColor='#97FFFF'
						>@ui_buffbuilder:points_remaining</Text>
						<Text
							Font='bold_13'
							LocalText='0'
							Location='151,258'
							MaxLines='1'
							MinimumSize='0,19'
							Name='dynamicPointsRemaining'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextColor='#97FFFF'
						>0</Text>
						<Text
							Font='bold_13'
							LocalText='[@ui_buffbuilder:total_cost]'
							Location='4,283'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelTotalCost'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextAlignment='Center'
							TextColor='#97FFFF'
						>@ui_buffbuilder:total_cost</Text>
						<Text
							Font='bold_13'
							LocalText='0'
							Location='151,281'
							MaxLines='1'
							MinimumSize='0,19'
							Name='dynamicTotalCost'
							PalText='header'
							ScrollExtent='134,19'
							Size='134,19'
							TextColor='#97FFFF'
						>0</Text>
						<Button
							buttondelete.visible='true'
							LocalText='[@ui_buffbuilder:add]'
							Location='1,117'
							MinimumSize='0,19'
							Name='buttonAdd'
							ScrollExtent='55,19'
							Size='55,19'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_buffbuilder:add</Button>
						<Button
							buttondelete.visible='true'
							LocalText='[@ui_buffbuilder:remove]'
							Location='2,139'
							MinimumSize='0,19'
							Name='buttonRemove'
							ScrollExtent='55,19'
							Size='55,19'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_buffbuilder:remove</Button>
					</Page>
					<Data
						content='comp.details.content'
						Label='bg.caption.text'
						Name='CodeData'
						textAttribs='comp.details.content.textAttribs'
						textDesc='comp.details.content.textDesc'
						viewer='comp.right.viewerpage.viewer'
					/>
				</Page>
				<Button
					buttondelete.visible='true'
					IsCancelButton='true'
					LocalText='[@ui_buffbuilder:cancel]'
					Location='525,564'
					MinimumSize='0,19'
					Name='buttonCancel'
					PackLocation='fff,fff'
					PackSize='f,f'
					ScrollExtent='113,19'
					Size='113,19'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ui_buffbuilder:cancel</Button>
				<Button
					LocalText='[@ui_buffbuilder:clear]'
					Location='399,564'
					MinimumSize='0,19'
					Name='buttonClear'
					PackLocation='fff,fff'
					PackSize='f,f'
					ScrollExtent='118,19'
					Size='118,19'
					Style='/Styles.New.buttons.hud.style'
				>@ui_buffbuilder:clear</Button>
				<Button
					LocalText='[@ui_buffbuilder:accept]'
					Location='278,564'
					MinimumSize='0,19'
					Name='buttonAccept'
					PackLocation='fff,fff'
					PackSize='f,f'
					ScrollExtent='109,19'
					Size='109,19'
					Style='/Styles.New.buttons.hud.style'
				>@ui_buffbuilder:accept</Button>
				<Page
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='651,594'
					Size='651,594'
				>
					<Page
						Location='640,8'
						Name='mmc'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='12,10'
						Size='12,10'
					>
						<Button
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							IsCancelButton='true'
							Location='-3,-3'
							Name='close'
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
						ScrollExtent='504,19'
						Size='504,19'
					>
						<Text
							Enabled='false'
							Font='bold_13'
							LocalText='[@ui_buffbuilder:buffer_caption]'
							Margin='6,-2,0,0'
							MaxLines='1'
							Name='text'
							PackSize='a,f'
							PalText='titletext'
							ScrollExtent='504,19'
							Size='504,19'
							TextAlignmentVertical='Center'
							TextColor='#00354F'
						>@ui_buffbuilder:buffer_caption</Text>
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
						ScrollExtent='650,594'
						Selectable='true'
						Size='650,594'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='1,0'
							Name='lines'
							PackSize='a,a'
							RStyleDefault='/Styles.space.boxes.generic4.rs_default'
							ScrollExtent='650,594'
							Size='650,594'
						>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='0,572'
								Name='outlineBL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,fff'
								PackSize='p,f'
								ScrollExtent='511,22'
								Size='511,22'
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
									ScrollExtent='511,9'
									Size='511,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='179,572'
								Name='outlineBR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,fff'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='471,22'
								Size='471,22'
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
									ScrollExtent='471,9'
									Size='471,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='179,0'
								Name='outlineTR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,f'
								ScrollExtent='471,22'
								Size='471,22'
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
									ScrollExtent='471,9'
									Size='471,9'
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
								ScrollExtent='511,22'
								Size='511,22'
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
									ScrollExtent='511,9'
									Size='511,9'
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
							ScrollExtent='651,29'
							Size='651,29'
						/>
						<Page
							BackgroundOpacity='1.00'
							Location='0,571'
							Name='bottom'
							PackLocation='nfn,fff'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_BR.rs_default'
							ScrollExtent='650,23'
							Size='650,23'
						/>
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
						ScrollExtent='651,586'
						Selectable='true'
						Size='651,586'
					/>
					<Page
						BackgroundOpacity='0.80'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='651,594'
						Selectable='true'
						Size='651,594'
					/>
				</Page>
			</Page>
			<Page
				BackgroundColor='#FFFFFF'
				Location='92,275'
				MinimumSize='500,390'
				Name='Buffee'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='/Styles.New.active2.rs_default'
				ScrollExtent='668,390'
				Size='668,390'
				UserMovable='true'
			>
				<Page
					BackgroundOpacity='0.50'
					BackgroundTint='#1CFFFF'
					Location='14,31'
					Name='data'
					PackSize='a,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='638,305'
					Size='638,305'
				>
					<Page
						Location='0,3'
						Name='page'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						RStyleDefault='rs_default'
						ScrollExtent='638,305'
						Size='638,305'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							Location='12,56'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='618,239'
							Size='618,239'
						>
							<Scrollbar
								Control='ListView'
								Enabled='false'
								Location='602,7'
								MaximumSize='8,223'
								Name='scroll'
								ScrollExtent='8,223'
								Size='8,223'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
							<DataSource
								Name='ListViewData'
							>
								<Data
									Name='foo'
									Text='fofofof'
								/>
								<Data
									Name='foo'
									Text='asdasdasd'
								/>
								<Data
									Name='foo'
									Text='fkfkfkfkfkkf'
								/>
								<Data
									Name='foo'
									Text='foobar'
								/>
							</DataSource>
							<List
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.00'
								DataSource='ListViewData'
								Location='9,9'
								MinimumScrollExtent='590,87'
								Name='ListView'
								RenderSeperatorLines='false'
								ScrollExtent='590,224'
								Selectable='false'
								SelectedRow='0'
								SelectedRowCount='1'
								SelectionAllowedMultiRow='false'
								Size='590,224'
								Style='/Styles.list.dark.style'
							/>
						</Page>
						<Text
							Font='bold_13'
							LocalText='[@ui_buffbuilder:entertainer]'
							Location='9,13'
							MaximumSize='148,19'
							MaxLines='1'
							MinimumSize='0,19'
							Name='labelBuffer'
							PackLocation='nnn,fff'
							PackSize='f,f'
							PalText='header'
							ScrollExtent='92,19'
							Size='92,19'
							TextColor='#97FFFF'
						>@ui_buffbuilder:entertainer</Text>
						<Text
							Font='bold_13'
							Location='104,13'
							MaximumSize='148,19'
							MaxLines='1'
							MinimumSize='0,19'
							Name='dynamicBuffer'
							PackLocation='nnn,fff'
							PackSize='f,f'
							PalText='header'
							ScrollExtent='148,19'
							Size='148,19'
							TextColor='#97FFFF'
						></Text>
					</Page>
				</Page>
				<Data
					bodycheckbox='checkBody'
					buttonAccept='buttonAccept'
					buttonCancel='buttonCancel'
					buttonclose='bg.mmc.close'
					caption='bg.caption.text'
					covercharge='coverCharge'
					entertainerName='data.page.dynamicBuffer'
					ListView='data.page.outline.ListView'
					Name='CodeData'
				/>
				<Text
					Font='bold_13'
					LocalText='[@ui_buffbuilder:cover_charge]'
					Location='15,361'
					MaxLines='1'
					MinimumSize='0,19'
					Name='labelCoverCharge'
					PackLocation='nnn,fff'
					PackSize='f,f'
					PalText='header'
					ScrollExtent='134,19'
					Size='134,19'
					TextAlignment='Center'
					TextColor='#97FFFF'
				>@ui_buffbuilder:cover_charge</Text>
				<Text
					Font='bold_13'
					LocalText='[@ui_buffbuilder:cover_charge]'
					Location='170,361'
					MaxLines='1'
					MinimumSize='0,19'
					Name='coverCharge'
					PackLocation='nnn,fff'
					PackSize='f,f'
					PalText='header'
					ScrollExtent='134,19'
					Size='134,19'
					TextAlignment='Center'
					TextColor='#97FFFF'
				>@ui_buffbuilder:cover_charge</Text>
				<Button
					buttondelete.visible='true'
					LocalText='[@ui_buffbuilder:accept]'
					Location='442,362'
					MinimumSize='0,19'
					Name='buttonAccept'
					PackLocation='fff,fff'
					PackSize='f,f'
					ScrollExtent='107,19'
					Size='107,19'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ui_buffbuilder:accept</Button>
				<Button
					buttondelete.visible='true'
					IsCancelButton='true'
					LocalText='[@ui_buffbuilder:cancel]'
					Location='552,362'
					MinimumSize='0,19'
					Name='buttonCancel'
					PackLocation='fff,fff'
					PackSize='f,f'
					ScrollExtent='102,19'
					Size='102,19'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ui_buffbuilder:cancel</Button>
				<Page
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='668,390'
					Size='668,390'
				>
					<Page
						Location='657,8'
						Name='mmc'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='12,10'
						Size='12,10'
					>
						<Button
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							IsCancelButton='true'
							Location='-3,-3'
							Name='close'
							PackLocation='fff,cfc'
							PackSize='f,f'
							ScrollExtent='16,16'
							Size='16,16'
							Style='/Styles.Frame.buttonClose.style'
						></Button>
					</Page>
					<Page
						Location='5,0'
						MinimumSize='0,19'
						Name='caption'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						ScrollExtent='521,19'
						Size='521,19'
					>
						<Text
							Enabled='false'
							Font='bold_13'
							LocalText='[@UI_BUFFBUILDER:RECIPIENT_CAPTION]'
							Margin='6,-2,0,0'
							MaxLines='1'
							MinimumSize='0,19'
							Name='text'
							PackSize='a,f'
							PalText='titletext'
							ScrollExtent='521,19'
							Size='521,19'
							TextAlignmentVertical='Center'
							TextCapital='true'
							TextColor='#00354F'
						>@ui_buffbuilder:recipient_caption</Text>
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
						ScrollExtent='667,390'
						Selectable='true'
						Size='667,390'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='1,0'
							Name='lines'
							PackSize='a,a'
							RStyleDefault='/Styles.space.boxes.generic4.rs_default'
							ScrollExtent='667,390'
							Size='667,390'
						>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='0,368'
								Name='outlineBL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,fff'
								PackSize='p,f'
								ScrollExtent='523,22'
								Size='523,22'
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
									ScrollExtent='523,9'
									Size='523,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='186,368'
								Name='outlineBR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,fff'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='481,22'
								Size='481,22'
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
									ScrollExtent='481,9'
									Size='481,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='186,0'
								Name='outlineTR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,f'
								ScrollExtent='481,22'
								Size='481,22'
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
									ScrollExtent='481,9'
									Size='481,9'
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
								ScrollExtent='523,22'
								Size='523,22'
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
									ScrollExtent='523,9'
									Size='523,9'
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
							ScrollExtent='668,29'
							Size='668,29'
						/>
						<Page
							BackgroundOpacity='1.00'
							Location='0,367'
							Name='bottom'
							PackLocation='nfn,fff'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_BR.rs_default'
							ScrollExtent='667,23'
							Size='667,23'
						/>
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
						ScrollExtent='668,382'
						Selectable='true'
						Size='668,382'
					/>
					<Page
						BackgroundOpacity='0.80'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='668,390'
						Selectable='true'
						Size='668,390'
					/>
				</Page>
			</Page>
		</Page>
