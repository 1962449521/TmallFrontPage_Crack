@protocol TMFrontPageTimePickerScrollViewDatasource <NSObject>
-(id)pageAtIndex:(int)index andScrollView:(id)view;
-(int)numberOfPages:(id)pages;
@end

@protocol TMFrontPageTimePickerScrollViewDelegate <NSObject>
@optional
-(void)didyearOrMonthChange:(id)change;
-(void)scrollviewDidChangeNumber;
-(void)didClickPage:(id)page atIndex:(int)index;
@end

@protocol TMFrontPagePulldownBoxDelegate <NSObject>
-(void)didTMFrontPagePulldownBoxDisappear:(id)disappear;
-(void)didTMFrontPagePulldownBoxShow:(id)show;
-(void)selectItem:(id)item didSelectedCell:(id)cell;
@end

@protocol TMFrontPageCustomizedPickerItemViewDelegate <NSObject>
-(void)itemViewClicked:(id)clicked;
-(BOOL)itemViewDeleteMe:(id)me;
-(BOOL)itemViewSaveMe:(id)me;
-(BOOL)itemViewShouldDeleteData:(id)itemView;
-(BOOL)itemViewShouldSaveData:(id)itemView;
@end

@protocol TMFrontPageElementLayoutDelegate <NSObject>
-(void)element:(id)element heightChanged:(BOOL)changed;
@end

@protocol TMFrontPageElementEventDelegate <NSObject>
-(void)deleteElement:(id)element;
-(void)element:(id)element clickedWithAction:(id)action userInfo:(id)info;
@end

@protocol TMFrontPageLayoutDelegate <NSObject>
-(void)layout:(id)layout heightChanged:(BOOL)changed;
@end

@protocol TMFrontPageLayoutPageScrollDelegate <TMFrontPageLayoutDelegate>
@optional
-(void)pageLayoutScrollToTop:(id)top;
-(void)pageLayoutJumpMorePage:(id)page;
-(void)pageLayout:(id)layout atIndex:(unsigned)index;
@end

@protocol TMCountDownComponentDelegate <NSObject>
-(void)componentDidTickFinished:(id)component;
-(void)componentDidTick:(id)component;
-(void)componentWillStartTick:(id)component;
@end

@protocol TMFrontPageLayoutScrollDelegate <TMFrontPageLayoutDelegate>
@optional
-(void)layout:(id)layout atIndex:(unsigned)index;
@end

@protocol TMFrontPageLayoutDataSource <NSObject>
-(unsigned)numberOfElementsOfLayout:(id)layout;
-(id)elementForLayout:(id)layout byMuiID:(id)anId;
@end


@protocol TMFrontPageElementCalculateHeightDelegate <NSObject>
-(void)calculateHeight;
@end

@protocol TMFrontPageCustomizedPickerViewDelegate <NSObject>
@optional
-(void)pickerViewDidTappedBackground:(id)pickerView;
-(void)pickerViewDidTappedFinisheButton:(id)pickerView;
-(void)pickerViewDidHide:(id)pickerView;
-(void)pickerViewWillHide:(id)pickerView;
-(void)pickerViewDidShow:(id)pickerView;
-(void)pickerViewWillShow:(id)pickerView;
@end

@protocol TMFrontPageCustomizedPickerViewDataSource <NSObject>
-(unsigned)numberOfItemsInPickerView:(id)pickerView;
-(id)pickerView:(id)view itemViewAtIndex:(unsigned)index;
@optional
-(float)bottomInContainerOfPickerView:(id)pickerView;
-(float)bottomOfPickerViewInContainer:(id)container;
@end

@protocol TMFrontPageBannerViewDelegate <NSObject>
@optional
-(void)didBannerItemTouch:(id)touch index:(int)index view:(id)view;
-(void)didBannerChange:(id)change fromIndex:(int)index toIndex:(int)index3 manually:(BOOL)manually view:(id)view;
@end

@protocol LayoutProtocol
-(void)calculateLayout;
@end

@protocol TMFrontPageElementProtocol <NSObject>
-(id)initWithIdentifier:(id)identifier;
@end

@protocol TMFrontPageLayoutProtocol <NSObject>
-(id)initWithIdentifier:(id)identifier;
@end


@interface TMFrontPageElementImportItem : TMFrontPageElement {
	unsigned _type;
	NSString* _logoImgUrl;
	NSString* _salePoint;
	NSString* _itemId;
	NSString* _price;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	TMImageView* _logoimageView;
	UILabel* _salePointLabel;
	UILabel* _priceLabel;
}
@property(retain, nonatomic) UILabel* priceLabel;
@property(retain, nonatomic) UILabel* salePointLabel;
@property(retain, nonatomic) TMImageView* logoimageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* itemId;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageLayoutModelSingleAndDouble : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageLayoutDragable : TMFrontPageLayout {
	unsigned _style;
	UIPanGestureRecognizer* _panGestureRecognizer;
}
@property(retain, nonatomic) UIPanGestureRecognizer* panGestureRecognizer;
-(unsigned)style;
-(void).cxx_destruct;
-(void)slideToEdge;
-(void)didPanned:(id)panned;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementModelNewHot : TMFrontPageElementModel {
	NSString* _imageA;
	NSString* _imageB;
	NSString* _imageC;
	NSString* _imageD;
	NSString* _thisType;
}
@property(retain, nonatomic) NSString* thisType;
@property(retain, nonatomic) NSString* imageD;
@property(retain, nonatomic) NSString* imageC;
@property(retain, nonatomic) NSString* imageB;
@property(retain, nonatomic) NSString* imageA;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementTitle : TMFrontPageElement {
	unsigned _type;
	NSString* _titleIcon;
	NSString* _subTitleIcon;
	NSString* _logoUrl;
	NSString* _cutLineColor;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _titleIconImg;
	UIImageView* _subTitleIconImg;
	UIImageView* _logoImageView;
	UIView* _clickView;
	UIView* _cutLineView;
}
@property(retain, nonatomic) UIView* cutLineView;
@property(retain, nonatomic) UIView* clickView;
@property(retain, nonatomic) UIImageView* logoImageView;
@property(retain, nonatomic) UIImageView* subTitleIconImg;
@property(retain, nonatomic) UIImageView* titleIconImg;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* cutLineColor;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* subTitleIcon;
@property(retain, nonatomic) NSString* titleIcon;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)clickedOnElement;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementAlbumB : TMFrontPageElementSingleImage {
	unsigned _type;
}
-(unsigned)type;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageTimePickerScrollView : XXUnknownSuperclass <UIScrollViewDelegate> {
	int _totalPages;
	int _curPage;
	NSMutableArray* _curViews;
	UIScrollView* _scrollView;
	int _currentPage;
	id<TMFrontPageTimePickerScrollViewDatasource> _datasource;
	id<TMFrontPageTimePickerScrollViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, setter=setDelegate:) id<TMFrontPageTimePickerScrollViewDelegate> delegate;
@property(assign, nonatomic, setter=setDataource:) id<TMFrontPageTimePickerScrollViewDatasource> datasource;
@property(assign, nonatomic) int currentPage;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) NSMutableArray* curViews;
@property(assign, nonatomic) int curPage;
@property(assign, nonatomic) int totalPages;
-(void).cxx_destruct;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)setAfterScrollShowView:(id)view andCurrentPage:(int)page;
-(void)setViewContent:(id)content atIndex:(int)index;
-(void)handleTap:(id)tap;
-(int)validPageValue:(int)value;
-(void)getDisplayImagesWithCurpage:(int)curpage;
-(void)loadData;
-(void)reloadData;
-(void)setCurrentSelectPage:(int)page;
-(id)initWithFrame:(CGRect)frame;
@end

@interface TMFrontPageElementModelHeadLineB : TMFrontPageElementModel {
	NSString* _logoUrl;
}
@property(retain, nonatomic) NSString* logoUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end


@interface TMFrontPageElementSuggestionB : TMFrontPageElement {
	unsigned _type;
	NSArray* _items;
}
@property(retain, nonatomic) NSArray* items;
-(unsigned)type;
-(void).cxx_destruct;
-(id)initWithIdentifier:(id)identifier;
-(void)calculateLayout;
-(void)clickedOnElement:(id)element;
@end

@interface TMFrontPageElementModelLivingNews : TMFrontPageElementModel {
	unsigned _interval;
	unsigned _linesCount;
	NSString* _mtopApi;
	NSString* _logoURL;
	NSArray* _newsArray;
}
@property(retain, nonatomic) NSArray* newsArray;
@property(retain, nonatomic) NSString* logoURL;
@property(retain, nonatomic) NSString* mtopApi;
@property(assign, nonatomic) unsigned linesCount;
@property(assign, nonatomic) unsigned interval;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageTimePickerView : XXUnknownSuperclass <TMFrontPageTimePickerScrollViewDatasource, TMFrontPageTimePickerScrollViewDelegate, TMFrontPagePulldownBoxDelegate> {
	UIView* _timeBroadcastView;
	TMFrontPageTimePickerScrollView* _dayScrollView;
	TMFrontPageTimePickerScrollView* _hourScrollView;
	TMFrontPageTimePickerScrollView* _minuteScrollView;
	TMFrontPageTimePickerScrollView* _secondScrollView;
	UILabel* _nowPickerShowTimeLabel;
	NSDate* _selectedDate;
	NSDateFormatter* _dateFormatter;
	UIView* _buttonView;
	TMFrontPagePulldownBox* _yearBox;
	TMFrontPagePulldownBox* _monthBox;
	int _startYear;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int startYear;
@property(retain, nonatomic) TMFrontPagePulldownBox* monthBox;
@property(retain, nonatomic) TMFrontPagePulldownBox* yearBox;
@property(retain, nonatomic) UIView* buttonView;
@property(retain, nonatomic) NSDateFormatter* dateFormatter;
@property(retain, nonatomic) NSDate* selectedDate;
@property(retain, nonatomic) UILabel* nowPickerShowTimeLabel;
@property(retain, nonatomic) TMFrontPageTimePickerScrollView* secondScrollView;
@property(retain, nonatomic) TMFrontPageTimePickerScrollView* minuteScrollView;
@property(retain, nonatomic) TMFrontPageTimePickerScrollView* hourScrollView;
@property(retain, nonatomic) TMFrontPageTimePickerScrollView* dayScrollView;
@property(retain, nonatomic) UIView* timeBroadcastView;
-(void).cxx_destruct;
-(id)imageWithColor:(id)color;
-(void)didTMFrontPagePulldownBoxDisappear:(id)disappear;
-(void)didTMFrontPagePulldownBoxShow:(id)show;
-(void)selectItem:(id)item didSelectedCell:(id)cell;
-(void)resetToTimeStr:(id)timeStr;
-(void)hidePulldownBox;
-(id)getDateTime;
-(id)fromDateToWeek:(id)week;
-(void)didyearOrMonthChange;
-(void)scrollviewDidChangeNumber;
-(int)getTime:(id)time andType:(int)type;
-(int)setNowTimeShow:(int)show;
-(id)pageAtIndex:(int)index andScrollView:(id)view;
-(int)numberOfPages:(id)pages;
-(void)setAfterScrollShowView:(id)view andCurrentPage:(int)page;
-(void)setSecondScrollView;
-(void)setMinuteScrollView;
-(void)setHourScrollView;
-(void)setDayScrollView;
-(void)setTime:(id)time autoChangeToDefaultTime:(BOOL)defaultTime;
-(void)setTime2DaysAfterTomorrow:(id)tomorrow;
-(void)setTimeTheDayAfterTomorrow:(id)tomorrow;
-(void)setTimeTomorrow:(id)tomorrow;
-(void)setPulldownBox;
-(void)setTimeBroadBtn;
-(void)setTimeBroadcastView;
-(id)initWithFrame:(CGRect)frame;
@end

@interface TMFrontPageElementModelTitleB : TMFrontPageElementModel {
}
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageCustomizedPickerItemView : XXUnknownSuperclass {
	BOOL _picked;
	BOOL _roundShape;
	NSString* _identifier;
	NSString* _action;
	id<TMFrontPageCustomizedPickerItemViewDelegate> _delegate;
	unsigned _index;
	UIView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIButton* _pickerButton;
	UIView* _maskView;
	UIImageView* _maskImageView;
}
@property(assign, nonatomic, getter=isRoundShape) BOOL roundShape;
@property(assign, nonatomic, getter=isPicked) BOOL picked;
@property(retain, nonatomic) UIImageView* maskImageView;
@property(retain, nonatomic) UIView* maskView;
@property(retain, nonatomic) UIButton* pickerButton;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UIView* backgroundView;
@property(assign, nonatomic) unsigned index;
@property(assign, nonatomic) __weak id<TMFrontPageCustomizedPickerItemViewDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* action;
@property(readonly, assign, nonatomic) NSString* identifier;
-(void).cxx_destruct;
-(void)configToUnpicked;
-(void)configToPicked;
-(void)itemClicked:(id)clicked;
-(void)didTappedPickerButton:(id)button;
-(void)configWithData:(id)data;
-(void)calculateLayout;
-(id)init;
@end

@interface TMFrontPageElementGoodShopB : TMFrontPageElement {
	unsigned _type;
	NSString* _logoURL;
	NSString* _tagImgURL;
	NSString* _desc;
	NSString* _img1URL;
	NSString* _img2URL;
	NSString* _img3URL;
	UIView* _contentView;
	TMImageView* _logoImageView;
	TMImageView* _tagImageView;
	TMImageView* _firstImageView;
	TMImageView* _secondImageView;
	TMImageView* _thirdImageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _descLabel;
	UIView* _shadowLineA;
	UIView* _shadowLineB;
}
@property(retain, nonatomic) UIView* shadowLineB;
@property(retain, nonatomic) UIView* shadowLineA;
@property(retain, nonatomic) UILabel* descLabel;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) TMImageView* thirdImageView;
@property(retain, nonatomic) TMImageView* secondImageView;
@property(retain, nonatomic) TMImageView* firstImageView;
@property(retain, nonatomic) TMImageView* tagImageView;
@property(retain, nonatomic) TMImageView* logoImageView;
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) NSString* img3URL;
@property(retain, nonatomic) NSString* img2URL;
@property(retain, nonatomic) NSString* img1URL;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* tagImgURL;
@property(retain, nonatomic) NSString* logoURL;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelShangxin : TMFrontPageElementModel {
	NSString* _titleAlias;
}
@property(retain, nonatomic) NSString* titleAlias;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutModelDoubleColumn : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageElementSingleImage : TMFrontPageElement {
	BOOL _toBeRender;
	unsigned _type;
	NSString* _imgURL;
	id<TMFrontPageElementLayoutDelegate> _layoutDelegate;
	float _imageHeight;
	TMImageView* _imageView;
}
@property(assign, nonatomic) BOOL toBeRender;
@property(retain, nonatomic) TMImageView* imageView;
@property(assign, nonatomic) unsigned type;
@property(assign, nonatomic) float imageHeight;
-(void)setLayoutDelegate:(id)delegate;
-(id)layoutDelegate;
-(id)imgURL;
-(void).cxx_destruct;
-(void)calculateLayout;
-(void)setHeight:(float)height;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
@end

@interface TMFrontPageElementNewAlbum : TMFrontPageElement {
	unsigned _type;
	unsigned _albumTag;
	unsigned _albumBgType;
	TMImageView* _tagView;
	TMImageView* _bgView;
	UIImage* _bgViewImage;
	TMImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
}
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UIImage* bgViewImage;
@property(retain, nonatomic) TMImageView* bgView;
@property(retain, nonatomic) TMImageView* tagView;
@property(assign, nonatomic) unsigned albumBgType;
@property(assign, nonatomic) unsigned albumTag;
-(unsigned)type;
-(void).cxx_destruct;
-(id)initWithIdentifier:(id)identifier;
-(void)calculateLayout;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageLayoutSingleColumn : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementShangxin : TMFrontPageElement {
	unsigned _type;
	NSString* _titleAlias;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _titleAliasLabel;
}
@property(retain, nonatomic) UILabel* titleAliasLabel;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) NSString* titleAlias;
-(unsigned)type;
-(void).cxx_destruct;
-(void)dealloc;
-(void)calculateLayout;
-(void)setImgURL:(id)url;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageLayoutModelScroll : TMFrontPageLayoutModel {
	float _indicatorRadius;
	NSString* _indicatorColor;
}
@property(retain, nonatomic) NSString* indicatorColor;
@property(assign, nonatomic) float indicatorRadius;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelChannel : TMFrontPageElementModel {
}
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementHotSubView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _subTitleIcon;
}
@property(retain, nonatomic) UIImageView* subTitleIcon;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
-(void).cxx_destruct;
-(void)loadData:(id)data;
-(id)initWithFrame:(CGRect)frame;
@end

@interface TMFrontPageElementHot : TMFrontPageElement {
	BOOL _isCountDown;
	unsigned _type;
	NSString* _titleColor;
	NSString* _subTitleColor;
	NSArray* _items;
	NSString* _logoURL;
	TMImageView* _imageView;
	UIImageView* _logoImageView;
	UIView* _contentView;
	TMFrontPageElementHotSubView* _subViewA;
	TMFrontPageElementHotSubView* _subViewB;
	UIView* _separator;
	unsigned _currentItemIndex;
}
@property(assign, nonatomic) BOOL isCountDown;
@property(assign, nonatomic) unsigned currentItemIndex;
@property(retain, nonatomic) UIView* separator;
@property(retain, nonatomic) TMFrontPageElementHotSubView* subViewB;
@property(retain, nonatomic) TMFrontPageElementHotSubView* subViewA;
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) UIImageView* logoImageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) NSString* logoURL;
@property(retain, nonatomic) NSArray* items;
-(id)subTitleColor;
-(id)titleColor;
-(unsigned)type;
-(void).cxx_destruct;
-(void)dealloc;
-(void)endCountdown;
-(void)beginCountdown;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)clickedOnElement;
-(void)setImgURL:(id)url;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelMiao : TMFrontPageElementModel {
	NSArray* _activityList;
	NSString* _defaultSummary;
	NSString* _defaultImage;
	NSString* _defaultMask;
}
@property(copy, nonatomic) NSString* defaultMask;
@property(copy, nonatomic) NSString* defaultImage;
@property(copy, nonatomic) NSString* defaultSummary;
@property(retain, nonatomic) NSArray* activityList;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelMiaoActivity : TMFrontPageElementModel {
	BOOL _isStarting;
	NSString* _maskUrl;
	NSString* _currentSummary;
	NSString* _nextSummary;
	NSString* _summary;
	double _startTime;
	double _endTime;
}
@property(assign, nonatomic) BOOL isStarting;
@property(retain, nonatomic) NSString* summary;
@property(retain, nonatomic) NSString* nextSummary;
@property(retain, nonatomic) NSString* currentSummary;
@property(assign, nonatomic) double endTime;
@property(assign, nonatomic) double startTime;
@property(retain, nonatomic) NSString* maskUrl;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelMustShoping : TMFrontPageElementModel {
	NSString* _salePoint;
	NSString* _price;
}
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* salePoint;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelNotification : TMFrontPageElementModel {
	NSString* _bgUrl;
	int _duration;
	double _startTime;
	double _endTime;
}
@property(readonly, assign, nonatomic) BOOL shouldAppear;
@property(assign, nonatomic) double endTime;
@property(assign, nonatomic) double startTime;
@property(assign, nonatomic) int duration;
@property(retain, nonatomic) NSString* bgUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelQuickEntry : TMFrontPageElementModel {
}
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutPageScroll : TMFrontPageLayout <TMMuiPagingViewDelegate, TMMuiPagingViewDataSource, TMMuiPageScrollViewDelegate> {
	BOOL _hasIndicator;
	BOOL _indicatorAutoHide;
	BOOL _willPush;
	BOOL _didLoad;
	unsigned _style;
	TMMuiPagingView* _pagingView;
	TMPageControl* _pageControl;
	unsigned _align;
	float _indicatorRadius;
	float _pageWidth;
	float _pageHeight;
	NSArray* _pageMargin;
	NSString* _indicatorColor;
	NSString* _defaultIndicatorColor;
	NSString* _hasMoreImage;
	NSString* _hasMoreAPI;
	NSString* _indicatorStyle;
	NSString* _indicatorPosition;
	NSString* _animation;
	TMMuiProgressBar* _progressBar;
	UIImageView* _loadMoreImageView;
	NSMutableArray* _pageElements;
	id<TMFrontPageLayoutPageScrollDelegate> _delegate;
	CGRect _newFrame;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL didLoad;
@property(assign, nonatomic) CGRect newFrame;
@property(assign, nonatomic) BOOL willPush;
@property(assign, nonatomic) __weak id<TMFrontPageLayoutPageScrollDelegate> delegate;
@property(retain, nonatomic) NSMutableArray* pageElements;
@property(retain, nonatomic) UIImageView* loadMoreImageView;
@property(retain, nonatomic) TMMuiProgressBar* progressBar;
@property(retain, nonatomic) TMPageControl* pageControl;
@property(retain, nonatomic) TMMuiPagingView* pagingView;
@property(retain, nonatomic) NSString* animation;
@property(assign, nonatomic) BOOL indicatorAutoHide;
@property(retain, nonatomic) NSString* indicatorPosition;
@property(retain, nonatomic) NSString* indicatorStyle;
@property(retain, nonatomic) NSString* hasMoreAPI;
@property(retain, nonatomic) NSString* hasMoreImage;
@property(retain, nonatomic) NSString* defaultIndicatorColor;
@property(retain, nonatomic) NSString* indicatorColor;
@property(retain, nonatomic) NSArray* pageMargin;
@property(assign, nonatomic) float pageHeight;
@property(assign, nonatomic) float pageWidth;
@property(assign, nonatomic) float indicatorRadius;
@property(assign, nonatomic) BOOL hasIndicator;
@property(assign, nonatomic) unsigned align;
-(unsigned)style;
-(void).cxx_destruct;
-(void)element:(id)element heightChanged:(BOOL)changed;
-(id)pagingView:(id)view pageAtIndex:(unsigned)index;
-(unsigned)numberOfPagesInPagingView:(id)pagingView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setLayoutDelegate:(id)delegate;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
-(void)pageAnimation;
-(void)addSubview:(id)subview;
@end

@interface TMFrontPageElementModelXinshui : TMFrontPageElementModel {
	NSString* _bgImageA;
	NSString* _bgImageB;
	NSString* _bgImageC;
	NSString* _bgImageD;
	NSString* _fgImage;
}
@property(retain, nonatomic) NSString* fgImage;
@property(retain, nonatomic) NSString* bgImageD;
@property(retain, nonatomic) NSString* bgImageC;
@property(retain, nonatomic) NSString* bgImageB;
@property(retain, nonatomic) NSString* bgImageA;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementItem : TMFrontPageElement {
	unsigned _type;
	NSString* _action;
	NSString* _price;
	UIImageView* _imageView;
	TMMuiLabel* _titleLabel;
	TMMuiLabel* _subTitleLabel;
	TMMuiLabel* _symbolLabel;
	TMMuiLabel* _priceLabel;
	UIView* _splitLine;
}
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) UIView* splitLine;
@property(retain, nonatomic) TMMuiLabel* priceLabel;
@property(retain, nonatomic) TMMuiLabel* symbolLabel;
@property(retain, nonatomic) TMMuiLabel* subTitleLabel;
@property(retain, nonatomic) TMMuiLabel* titleLabel;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) NSString* price;
-(void)setAction:(id)action;
-(void).cxx_destruct;
-(void)dealloc;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setBackgroundColor:(id)color;
-(void)setTitle:(id)title;
-(void)setImgURL:(id)url;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(id)action;
@end

@interface TMFrontPageElementModelAlbumB : TMFrontPageElementModelSingleImage {
}
-(float)imageHeight;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementCategorySmall : TMFrontPageElement {
	unsigned _type;
	unsigned _bgShape;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _imageView;
	UIView* _backgroundView;
	UIImageView* _pinnedView;
}
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) UIImageView* pinnedView;
@property(retain, nonatomic) UIView* backgroundView;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic) unsigned bgShape;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setPin:(BOOL)pin;
-(void)setImgURL:(id)url;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
@end

@interface TMFrontPageElementCategoryLarge : TMFrontPageElement {
	unsigned _type;
	unsigned _bgShape;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	UIView* _backgroundView;
	TMImageView* _pinnedView;
}
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) TMImageView* pinnedView;
@property(retain, nonatomic) UIView* backgroundView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic) unsigned bgShape;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setPin:(BOOL)pin;
-(void)setImgURL:(id)url;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
@end

@interface TMFrontPageElementModelSuggestionB : TMFrontPageElementModelSuggestion {
}
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutTetradColumn : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementModelItemB : TMFrontPageElementModel {
	NSString* _price;
	NSArray* _imageTags;
	NSString* _textTag;
	NSString* _boldTitle;
	NSString* _logoUrl;
	NSString* _benefit;
	UIColor* _recColor;
	UIColor* _benefitColor;
	UIColor* _benefitBgColor;
}
@property(retain, nonatomic) UIColor* benefitBgColor;
@property(retain, nonatomic) UIColor* benefitColor;
@property(retain, nonatomic) UIColor* recColor;
@property(retain, nonatomic) NSString* benefit;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* boldTitle;
@property(retain, nonatomic) NSString* textTag;
@property(retain, nonatomic) NSArray* imageTags;
@property(retain, nonatomic) NSString* price;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutModelTribleColumn : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageLayoutSingleAndDouble : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(void)calculateLayout;
-(unsigned)numberOfColumns;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementXinshui : TMFrontPageElement {
	unsigned _type;
	NSString* _bgImageA;
	NSString* _bgImageB;
	NSString* _bgImageC;
	NSString* _bgImageD;
	NSString* _fgImage;
	TMImageView* _bgImageViewA;
	TMImageView* _bgImageViewB;
	TMImageView* _bgImageViewC;
	TMImageView* _bgImageViewD;
	TMImageView* _fgImageView;
	UIView* _maskView;
}
@property(retain, nonatomic) UIView* maskView;
@property(retain, nonatomic) TMImageView* fgImageView;
@property(retain, nonatomic) TMImageView* bgImageViewD;
@property(retain, nonatomic) TMImageView* bgImageViewC;
@property(retain, nonatomic) TMImageView* bgImageViewB;
@property(retain, nonatomic) TMImageView* bgImageViewA;
@property(retain, nonatomic) NSString* fgImage;
@property(retain, nonatomic) NSString* bgImageD;
@property(retain, nonatomic) NSString* bgImageC;
@property(retain, nonatomic) NSString* bgImageB;
@property(retain, nonatomic) NSString* bgImageA;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageLayoutModelTetradColumn : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageElementModelSuggestion : TMFrontPageElementModel {
	NSArray* _items;
}
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelSuggestionKeyword : TMFrontPageElementModel {
	NSString* _text;
}
@property(retain, nonatomic) NSString* text;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementHeadLineB : TMFrontPageElement {
	unsigned _type;
	NSString* _logoUrl;
	TMMuiLabel* _titleLabel;
	TMMuiLabel* _subTitleLabel;
	TMImageView* _imageView;
	TMImageView* _logoimageView;
}
@property(retain, nonatomic) TMImageView* logoimageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) TMMuiLabel* subTitleLabel;
@property(retain, nonatomic) TMMuiLabel* titleLabel;
@property(retain, nonatomic) NSString* logoUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementMiao : TMFrontPageElement <TMCountDownComponentDelegate> {
	unsigned _type;
	NSString* _maskUrl;
	NSArray* _activityList;
	NSString* _defaultSummary;
	NSString* _defaultImage;
	NSString* _defaultMaskImage;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	TMImageView* _maskImageView;
	UILabel* _hourLabel;
	UILabel* _minuteLabel;
	UILabel* _secondLabel;
	UILabel* _leftColonLabel;
	UILabel* _rightColonLabel;
	TMCountDownComponent* _countDownComponent;
	TMFrontPageElementModelMiaoActivity* _currentActivity;
	NSString* _bizId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* bizId;
@property(assign, nonatomic) __weak TMFrontPageElementModelMiaoActivity* currentActivity;
@property(retain, nonatomic) TMCountDownComponent* countDownComponent;
@property(retain, nonatomic) UILabel* rightColonLabel;
@property(retain, nonatomic) UILabel* leftColonLabel;
@property(retain, nonatomic) UILabel* secondLabel;
@property(retain, nonatomic) UILabel* minuteLabel;
@property(retain, nonatomic) UILabel* hourLabel;
@property(retain, nonatomic) TMImageView* maskImageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* defaultMaskImage;
@property(retain, nonatomic) NSString* defaultImage;
@property(retain, nonatomic) NSString* defaultSummary;
@property(retain, nonatomic) NSArray* activityList;
@property(retain, nonatomic) NSString* maskUrl;
-(void).cxx_destruct;
-(void)clickedOnElement;
-(id)timeStringWithInteger:(int)integer;
-(id)findActivity;
-(void)renderNextActivity;
-(void)componentDidTickFinished:(id)component;
-(void)componentDidTick:(id)component;
-(void)componentWillStartTick:(id)component;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setImgURL:(id)url;
@end

@interface TMFrontPageElementModelMarketing : TMFrontPageElementModel {
	NSString* _logoImgUrl;
	NSString* _salePoint;
}
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelAlbum : TMFrontPageElementModel {
	NSString* _maskUrl;
}
@property(retain, nonatomic) NSString* maskUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementMustShoping : TMFrontPageElement {
	unsigned _type;
	NSString* _salePoint;
	NSString* _price;
	UILabel* _titleLabel;
	TMImageView* _imageView;
	UILabel* _priceLabel;
	UILabel* _saleLabel;
	UIImageView* _salebgImg;
}
@property(retain, nonatomic) UIImageView* salebgImg;
@property(retain, nonatomic) UILabel* saleLabel;
@property(retain, nonatomic) UILabel* priceLabel;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* salePoint;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelTitle : TMFrontPageElementModel {
	NSString* _titleIcon;
	NSString* _subTitleIcon;
	NSString* _logoUrl;
	NSString* _cutLineColor;
}
@property(retain, nonatomic) NSString* cutLineColor;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* subTitleIcon;
@property(retain, nonatomic) NSString* titleIcon;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutModelMix : TMFrontPageLayoutModel {
	NSArray* _mixedLayouts;
	NSArray* _mixLayoutModels;
	NSArray* _itemsArry;
}
@property(retain, nonatomic) NSArray* itemsArry;
@property(retain, nonatomic) NSArray* mixLayoutModels;
@property(retain, nonatomic) NSArray* mixedLayouts;
-(void).cxx_destruct;
-(id)formatModels;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelBrand : TMFrontPageElementModel {
	NSString* _logoImgUrl;
	NSString* _brandText;
	NSString* _salePoint;
}
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* brandText;
@property(retain, nonatomic) NSString* logoImgUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelItem : TMFrontPageElementModel {
	NSString* _price;
}
@property(retain, nonatomic) NSString* price;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutTribleColumn : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMTabLauncherFrontPageWidget : XXUnknownSuperclass <TMTabLauncherWidget> {
	UIViewController* _controller;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(BOOL)lazyLoad;
-(BOOL)forceLogin;
-(BOOL)hidesNavigationBar;
-(id)widgetUTName;
-(id)widgetName;
-(id)widgetHighlightIconFontStr;
-(id)widgetIconFontStr;
-(id)contentViewController;
@end

@interface TMFrontPageLayoutModelPageScroll : TMFrontPageLayoutModel {
	BOOL _hasIndicator;
	BOOL _indicatorAutoHide;
	unsigned _align;
	float _indicatorRadius;
	float _pageWidth;
	float _pageHeight;
	NSArray* _pageMargin;
	NSString* _indicatorColor;
	NSString* _defaultIndicatorColor;
	NSString* _hasMoreImage;
	NSString* _hasMoreAPI;
	NSString* _indicatorStyle;
	NSString* _indicatorPosition;
	NSString* _animation;
}
@property(retain, nonatomic) NSString* animation;
@property(assign, nonatomic) BOOL indicatorAutoHide;
@property(retain, nonatomic) NSString* indicatorPosition;
@property(retain, nonatomic) NSString* indicatorStyle;
@property(retain, nonatomic) NSString* hasMoreAPI;
@property(retain, nonatomic) NSString* hasMoreImage;
@property(retain, nonatomic) NSString* defaultIndicatorColor;
@property(retain, nonatomic) NSString* indicatorColor;
@property(retain, nonatomic) NSArray* pageMargin;
@property(assign, nonatomic) float pageHeight;
@property(assign, nonatomic) float pageWidth;
@property(assign, nonatomic) float indicatorRadius;
@property(assign, nonatomic) BOOL hasIndicator;
@property(assign, nonatomic) unsigned align;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelSingleImage : TMFrontPageElementModel {
	float _imageHeight;
	float _percentage;
	CGRect _rect;
}
@property(assign, nonatomic) float percentage;
@property(assign, nonatomic) float imageHeight;
-(void)setRect:(CGRect)rect;
-(CGRect)rect;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelFlagShip : TMFrontPageElementModel {
	NSArray* _items;
}
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelFlagShipItem : TMFrontPageElementModel {
}
@end

@interface TMFrontPageBannerView : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSMutableArray* _bannerArray;
	UIScrollView* _scrollView;
	TMPageControl* _pageControl;
	NSTimer* _autoscrollTimer;
	BOOL _autoscroll;
	id<TMFrontPageBannerViewDelegate> _delegate;
	double _autoscrollInterval;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<TMFrontPageBannerViewDelegate> delegate;
@property(assign, nonatomic) double autoscrollInterval;
@property(assign, nonatomic) BOOL autoscroll;
-(void).cxx_destruct;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)onTap:(id)tap;
-(void)restoreLastView;
-(void)moveLastViewToFirstVoidPosition;
-(void)restoreFirstView;
-(void)moveFirstViewToLastVoidPosition;
-(void)autoscrollTimerFired;
-(void)stopAutoscroll;
-(void)startAutoscroll;
-(void)notifyBannerItemTouch:(int)touch;
-(void)notifyBannerChange:(int)change newIndex:(int)index manually:(BOOL)manually;
-(void)setup:(id)setup current:(int)current isAD:(id)ad imageName:(id)name;
-(id)bannerArray;
-(void)setup:(id)setup current:(int)current;
-(void)setFrame:(CGRect)frame;
-(void)removeFromSuperview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
-(void)initialize;
@end

@interface TMFrontPageElementNewQuickEntry : TMFrontPageElement {
	unsigned type;
	TMImageView* _imageView;
	UILabel* _titleLabel;
}
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) TMImageView* imageView;
@property(assign, nonatomic) unsigned type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setTitleColor:(id)color;
-(void)setTitle:(id)title;
-(void)setImgURL:(id)url;
@end


@interface TMFrontPageElementFlagShip : TMFrontPageElement {
	unsigned _type;
	NSArray* _items;
	UIView* _itemPad;
	UIButton* _shopButton;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
}
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIButton* shopButton;
@property(retain, nonatomic) UIView* itemPad;
@property(retain, nonatomic) NSArray* items;
-(unsigned)type;
-(void).cxx_destruct;
-(id)initWithIdentifier:(id)identifier;
-(void)calculateLayout;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)clickOnShopButton:(id)button;
-(void)clickedOnElement:(id)element;
@end

@interface TMFrontPageElementTitleB : TMFrontPageElement {
	unsigned _type;
	TMMuiLabel* _titleLabel;
	TMMuiCutLineView* _leftLine;
	TMMuiCutLineView* _rightLine;
}
@property(retain, nonatomic) TMMuiCutLineView* rightLine;
@property(retain, nonatomic) TMMuiCutLineView* leftLine;
@property(retain, nonatomic) TMMuiLabel* titleLabel;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setTitle:(id)title;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageLayoutModelDoubleAndSingle : TMFrontPageLayoutModel {
}
@end

@interface FrontPageTopBar : XXUnknownSuperclass {
	UIView* _background;
	UIView* _frontground;
}
@property(retain, nonatomic) UIView* frontground;
@property(retain, nonatomic) UIView* background;
-(void).cxx_destruct;
-(void)setHidden:(BOOL)hidden;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end

@interface FrontPageController : TMViewController <TMFrontPageElementEventDelegate, TMFrontPageLayoutDelegate, TMFrontPageLayoutScrollDelegate, TMFrontPageLayoutDataSource, TMFrontPageLayoutPageScrollDelegate, TMMuiScrollViewDelegate, TMMuiLazyScrollViewDataSource, TMMuiNoResultViewDelegate, FlashManagerDelegate, UITextFieldDelegate, UIToolbarDelegate> {
	BOOL _loading;
	BOOL _loadingMore;
	BOOL _canBeRecycled;
	BOOL _fromCache;
	BOOL _hasMoreData;
	BOOL _autoShowSuperBrandMask;
	BOOL _moreRecommendNumSaved;
	BOOL _trackingPerformance;
	BOOL _clearCache;
	BOOL _mainVenueShoudShow;
	BOOL _popLayerShow;
	BOOL _isBack;
	BOOL _seaviewHasNoMore;
	BOOL _elevatorShow;
	BOOL _isNewExposure;
	BOOL _isSaleExposure;
	BOOL _isHotExposure;
	BOOL _goodShopShow;
	BOOL _recommendHallShow;
	BOOL _recommendVVipShow;
	BOOL _isNotFirstLoad;
	NSArray* _dataSource;
	NSMutableDictionary* _layoutModelDict;
	NSMutableDictionary* _layoutDict;
	NSMutableArray* _layoutArray;
	TMFrontPageLazyScrollView* _contentView;
	SearchBoxButton* _searchBoxBtn;
	NSString* _currentLayout;
	NSMutableDictionary* _showedAlgIdDict;
	AirTrack* _tester;
	NSString* _pageName;
	NSString* _currentUserId;
	NSString* _bucketNumber;
	NSMutableDictionary* _taobaoNeededShowedParams;
	TMMuiMsgBadgeButton* _messageButton;
	TMFrontPageRequest* _staticDataRequest;
	TMFrontPageMoreRecommendRequest* _moreRecommendRequest;
	TMFrontPageGoodShopRequest* _goodShopRequest;
	TMFrontPageLayout* _moreDataLayout;
	NSDate* _lastUpdateDate;
	NSMutableDictionary* _elementDict;
	TMMuiNoResultView* _errorTips;
	FrontPageTopBar* _topBar;
	FrontPageTopTips* _frontPageTopTips;
	FrontPageBottomTips* _frontPageBottomTips;
	UIImageView* _flashView;
	TMMuiButton* _returnToTopBtn;
	TMFrontPageElement* _superAView;
	TMFrontPageElementModel* _superAModel;
	TMFrontPageLayout* _superALayout;
	NSDictionary* _flashInfo;
	NSMutableArray* _uploadedKeyword;
	NSDictionary* _toUploadMoreRecommendParams;
	UITextField* _dateField;
	TMFrontPageTimePickerView* _timePicker;
	UIToolbar* _timePickerBar;
	int _recommendPageCount;
	NSMutableArray* _showedLayouts;
	UIControl* _blockControl;
	UIView* _mainVenueView;
	float _mainVenueBottom;
	NSString* _shakeUrl;
	NSString* _shakeTitle;
	NSMutableArray* _seaviewRooms;
	NSMutableArray* _seaviewKeyFrames;
	ElevatorView* _elevatorView;
	NSString* _topBarChangeColor;
	NSMutableArray* _popLayerTimerRemindArray;
	NSString* _popLayerTimerTipText;
	NSDictionary* _mainVenue;
	NSString* _jumpParam;
	double _lastContentY;
	double _topBarChangeStartTime;
	double _topBarChangeEndTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* jumpParam;
@property(assign, nonatomic) BOOL isNotFirstLoad;
@property(retain, nonatomic) NSDictionary* mainVenue;
@property(retain, nonatomic) NSString* popLayerTimerTipText;
@property(retain, nonatomic) NSMutableArray* popLayerTimerRemindArray;
@property(retain, nonatomic) NSString* topBarChangeColor;
@property(assign, nonatomic) double topBarChangeEndTime;
@property(assign, nonatomic) double topBarChangeStartTime;
@property(assign, nonatomic) BOOL recommendVVipShow;
@property(assign, nonatomic) BOOL recommendHallShow;
@property(assign, nonatomic) BOOL goodShopShow;
@property(assign, nonatomic) BOOL isHotExposure;
@property(assign, nonatomic) BOOL isSaleExposure;
@property(assign, nonatomic) BOOL isNewExposure;
@property(assign, nonatomic) BOOL elevatorShow;
@property(assign, nonatomic) BOOL seaviewHasNoMore;
@property(retain, nonatomic) ElevatorView* elevatorView;
@property(retain, nonatomic) NSMutableArray* seaviewKeyFrames;
@property(retain, nonatomic) NSMutableArray* seaviewRooms;
@property(assign, nonatomic) BOOL isBack;
@property(copy, nonatomic) NSString* shakeTitle;
@property(copy, nonatomic) NSString* shakeUrl;
@property(assign, nonatomic) BOOL popLayerShow;
@property(assign, nonatomic) float mainVenueBottom;
@property(retain, nonatomic) UIView* mainVenueView;
@property(assign, nonatomic) BOOL mainVenueShoudShow;
@property(retain, nonatomic) UIControl* blockControl;
@property(assign, nonatomic) BOOL clearCache;
@property(retain, nonatomic) NSMutableArray* showedLayouts;
@property(assign, nonatomic) int recommendPageCount;
@property(assign, nonatomic, getter=isTrackingPerformance) BOOL trackingPerformance;
@property(retain, nonatomic) UIToolbar* timePickerBar;
@property(retain, nonatomic) TMFrontPageTimePickerView* timePicker;
@property(retain, nonatomic) UITextField* dateField;
@property(retain, nonatomic) NSDictionary* toUploadMoreRecommendParams;
@property(assign, nonatomic) BOOL moreRecommendNumSaved;
@property(retain, nonatomic) NSMutableArray* uploadedKeyword;
@property(retain, nonatomic) NSDictionary* flashInfo;
@property(retain, nonatomic) TMFrontPageLayout* superALayout;
@property(retain, nonatomic) TMFrontPageElementModel* superAModel;
@property(retain, nonatomic) TMFrontPageElement* superAView;
@property(retain, nonatomic) TMMuiButton* returnToTopBtn;
@property(assign, nonatomic) double lastContentY;
@property(assign, nonatomic) BOOL autoShowSuperBrandMask;
@property(retain, nonatomic) UIImageView* flashView;
@property(retain, nonatomic) FrontPageBottomTips* frontPageBottomTips;
@property(retain, nonatomic) FrontPageTopTips* frontPageTopTips;
@property(retain, nonatomic) FrontPageTopBar* topBar;
@property(retain, nonatomic) TMMuiNoResultView* errorTips;
@property(retain, nonatomic) NSMutableDictionary* elementDict;
@property(retain, nonatomic) NSDate* lastUpdateDate;
@property(retain, nonatomic) TMFrontPageLayout* moreDataLayout;
@property(assign, nonatomic) BOOL hasMoreData;
@property(retain, nonatomic) TMFrontPageGoodShopRequest* goodShopRequest;
@property(retain, nonatomic) TMFrontPageMoreRecommendRequest* moreRecommendRequest;
@property(retain, nonatomic) TMFrontPageRequest* staticDataRequest;
@property(assign, nonatomic) __weak TMMuiMsgBadgeButton* messageButton;
@property(retain, nonatomic) NSMutableDictionary* taobaoNeededShowedParams;
@property(assign) BOOL fromCache;
@property(assign) BOOL canBeRecycled;
@property(retain, nonatomic) NSString* bucketNumber;
@property(retain, nonatomic) NSString* currentUserId;
@property(retain, nonatomic) NSString* pageName;
@property(retain, nonatomic) AirTrack* tester;
@property(retain, nonatomic) NSMutableDictionary* showedAlgIdDict;
@property(assign, nonatomic, getter=isLoadingMore) BOOL loadingMore;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(retain, nonatomic) NSString* currentLayout;
@property(retain, nonatomic) SearchBoxButton* searchBoxBtn;
@property(retain, nonatomic) TMFrontPageLazyScrollView* contentView;
@property(retain, nonatomic) NSMutableArray* layoutArray;
@property(retain, nonatomic) NSMutableDictionary* layoutDict;
@property(retain, nonatomic) NSMutableDictionary* layoutModelDict;
@property(retain, nonatomic) NSArray* dataSource;
-(void).cxx_destruct;
-(void)removeBlockControlAndResignDateField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)tabBarReclick:(id)reclick;
-(void)clickOKButton;
-(void)clickClearButton;
-(void)clickCancleButton;
-(BOOL)useShakeForMiaoshaBaitItems;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewDidDisappear:(BOOL)view;
-(void)setRewritedActionURL:(id)url;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(id)init;
-(void)frontPageConfigUpdate;
-(void)popLayerUpdate;
-(void)mainVenueCheck;
-(void)returnToTopBtnShow;
-(void)elevatorViewShowWithOffsetY;
-(void)makeFrontPageStyleNavigationBar;
-(void)handleThemeUpdate;
-(void)handleThemeUpdateNotification:(id)notification;
-(void)resetContent;
-(void)calculateLayoutFrame:(id)frame;
-(void)layoutContentWithLayoutCalculate:(BOOL)layoutCalculate;
-(void)reLayoutContent;
-(void)initNavigationItem;
-(void)initContentFromCache:(BOOL)cache;
-(void)initSearchBox;
-(id)historyCeleBrandIds;
-(void)saveHistoryCeleBrandIdForModel:(id)model;
-(id)historyBrandIDs;
-(void)saveHistoryBrandIdForModel:(id)model;
-(void)saveMoreRecommendVisibleNum;
-(int)moreRecommendVisibleNum;
-(id)historyItemIDs;
-(void)appendLayout:(id)layout;
-(void)loadData;
-(void)loadMore;
-(id)UTPageName;
-(void)cleanViewController;
-(void)refreshMessageCount;
-(void)appendElementModels:(id)models models:(id)models2;
-(void)buildAllElementModels;
-(void)postLayoutDoneNotification;
-(void)uploadMoreRecommendShowWithParams:(id)params;
-(void)enterForeground;
-(void)stopPullAnimation;
-(void)buildDateField;
-(void)endTrackRenderPerformance;
-(void)renderWithDataString:(id)dataString fromCache:(BOOL)cache;
-(void)renderWithDataFromCache:(BOOL)cache;
-(void)updateModuleShowedStatusForLayout:(id)layout;
-(void)mainViewHidden:(BOOL)hidden;
-(void)mainVenueViewClick;
-(void)btnListClick:(id)click;
-(void)btnScanClick:(id)click;
-(void)btnMessageClick:(id)click;
-(void)btnSearchBoxClick:(id)click;
-(double)timeIntervalForString:(id)string;
-(id)customDataKey;
-(id)scrollView:(id)view itemByMuiID:(id)anId;
-(id)scrollView:(id)view rectModelAtIndex:(unsigned)index;
-(unsigned)numberOfItemInScrollView:(id)scrollView;
-(void)element:(id)element clickedWithAction:(id)action userInfo:(id)info;
-(void)deleteElement:(id)element;
-(void)pageLayoutJumpMorePage:(id)page;
-(void)pageLayout:(id)layout atIndex:(unsigned)index;
-(void)layout:(id)layout atIndex:(unsigned)index;
-(void)layout:(id)layout heightChanged:(BOOL)changed;
-(unsigned)numberOfElementsOfLayout:(id)layout;
-(id)elementForLayout:(id)layout byMuiID:(id)anId;
-(void)triggeredLoadData:(unsigned)data;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)processBeforePush:(id)push withContext:(id)context;
-(void)didTouchDownButton:(id)button;
-(void)flashViewWillDisappear;
-(void)flashViewDidShowWithData:(id)flashView;
-(void)shakeDeInit;
-(void)shakeInit;
-(BOOL)_shakeCheckEnable;
-(double)_shakeConvertTimeinterval:(id)timeinterval;
-(void)_shakeDelayJump:(id)jump;
-(void)appActive;
-(void)appResign;
@end


@interface TMFrontPageElementModel : XXUnknownSuperclass <TMFrontPageElementCalculateHeightDelegate> {
	BOOL _pin;
	BOOL _canReuse;
	BOOL _noReset;
	BOOL _isExposure;
	BOOL _animFlag;
	NSArray* _margin;
	unsigned _elementIndex;
	NSString* _identifier;
	NSString* _syncIds;
	unsigned _type;
	NSString* _bgColor;
	NSString* _display;
	NSString* _title;
	NSString* _titleColor;
	NSString* _subTitle;
	NSString* _subTitleColor;
	NSString* _imgUrl;
	NSString* _action;
	NSString* _celeBrandId;
	NSArray* _appendVarKeys;
	float _baseHeight;
	NSString* _source;
	NSDictionary* _pageParams;
	NSString* _pageParamsString;
	NSString* _reuseIdentifier;
	NSString* _muiID;
	NSDictionary* _ctrClickParam;
	NSString* _ctrClickParamString;
	CGRect _rect;
	CGRect _absRect;
	CGRect _parentRect;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL animFlag;
@property(assign, nonatomic) BOOL isExposure;
@property(retain, nonatomic) NSString* ctrClickParamString;
@property(retain, nonatomic) NSDictionary* ctrClickParam;
@property(assign, nonatomic) BOOL noReset;
@property(assign, nonatomic) BOOL canReuse;
@property(retain, nonatomic) NSString* muiID;
@property(retain, nonatomic) NSString* reuseIdentifier;
@property(assign, nonatomic) CGRect parentRect;
@property(assign, nonatomic) CGRect absRect;
@property(assign, nonatomic) CGRect rect;
@property(retain, nonatomic) NSString* pageParamsString;
@property(retain, nonatomic) NSDictionary* pageParams;
@property(retain, nonatomic) NSString* source;
@property(assign, nonatomic) float baseHeight;
@property(retain, nonatomic) NSArray* appendVarKeys;
@property(assign, nonatomic) BOOL pin;
@property(retain, nonatomic) NSString* celeBrandId;
@property(retain, nonatomic) NSString* action;
@property(retain, nonatomic) NSString* imgUrl;
@property(retain, nonatomic) NSString* subTitleColor;
@property(retain, nonatomic) NSString* subTitle;
@property(retain, nonatomic) NSString* titleColor;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* margin;
@property(retain, nonatomic) NSString* display;
@property(retain, nonatomic) NSString* bgColor;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* syncIds;
@property(retain, nonatomic) NSString* identifier;
@property(assign, nonatomic) unsigned elementIndex;
-(void).cxx_destruct;
-(void)right:(float)right FromModel:(id)model;
-(void)left:(float)left FromModel:(id)model;
-(void)bottom:(float)bottom FromModel:(id)model;
-(void)top:(float)top FromModel:(id)model;
-(void)rightInContainer:(float)container shouldResize:(BOOL)resize;
-(void)leftInContainer:(float)container shouldResize:(BOOL)resize;
-(void)bottomInContainer:(float)container shouldResize:(BOOL)resize;
-(void)topInContainer:(float)container shouldResize:(BOOL)resize;
-(float)marginLeft;
-(float)marginBottom;
-(float)marginRight;
-(float)marginTop;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end


@interface TMFrontPageElementLivingNews : TMFrontPageElement {
	BOOL _isInitNewsItems;
	BOOL _isNeedReload;
	BOOL _countDownBegin;
	BOOL _isLoading;
	BOOL _showAllItems;
	unsigned _type;
	unsigned _interval;
	unsigned _linesCount;
	NSString* _mtopApi;
	NSString* _logoURL;
	NSArray* _newsArray;
	LivingNewsTitleView* _titleView;
	UIView* _bottomView;
	UILabel* _titleLabel;
	NSMutableArray* _itemsArray;
	unsigned _countdownTime;
	UIImageView* _goinView;
	unsigned _arrayIndex;
	NSArray* _otherArray;
	MTOPRequest* _httpRequest;
}
@property(retain, nonatomic) MTOPRequest* httpRequest;
@property(assign, nonatomic) BOOL showAllItems;
@property(assign, nonatomic) BOOL isLoading;
@property(assign, nonatomic) BOOL countDownBegin;
@property(retain, nonatomic) NSArray* otherArray;
@property(assign, nonatomic) unsigned arrayIndex;
@property(assign, nonatomic) BOOL isNeedReload;
@property(assign, nonatomic) BOOL isInitNewsItems;
@property(retain, nonatomic) UIImageView* goinView;
@property(assign, nonatomic) unsigned countdownTime;
@property(retain, nonatomic) NSMutableArray* itemsArray;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIView* bottomView;
@property(retain, nonatomic) LivingNewsTitleView* titleView;
@property(retain, nonatomic) NSArray* newsArray;
@property(retain, nonatomic) NSString* logoURL;
@property(retain, nonatomic) NSString* mtopApi;
@property(assign, nonatomic) unsigned linesCount;
@property(assign, nonatomic) unsigned interval;
-(unsigned)type;
-(void).cxx_destruct;
-(id)selfvc;
-(id)currentvc;
-(BOOL)isDisplayedInScreen;
-(void)itemClick:(id)click;
-(void)bottomViewClick;
-(void)calculateLayout;
-(void)refreshWithAnimation:(BOOL)animation;
-(void)stopCountdown;
-(void)beginCountdown;
-(void)setFrame:(CGRect)frame;
-(id)initWithIdentifier:(id)identifier;
-(void)setHidden:(BOOL)hidden;
-(void)setTitle:(id)title;
-(void)setSubTitle:(id)title;
@end

@interface TMFrontPagePulldownBox : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	BOOL _showList;
	NSArray* _tableArray;
	id<TMFrontPagePulldownBoxDelegate> _delegate;
	float _frameHeight;
	UIButton* _targetView;
	UITableView* _tv;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITableView* tv;
@property(retain, nonatomic) UIButton* targetView;
@property(assign, nonatomic) float frameHeight;
@property(assign, nonatomic) id<TMFrontPagePulldownBoxDelegate> delegate;
@property(assign, nonatomic) BOOL showList;
@property(retain, nonatomic) NSArray* tableArray;
-(void).cxx_destruct;
-(void)setSelectedCell:(int)cell;
-(void)setTargetViewText:(id)text;
-(void)hideView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)dropdown;
-(id)initWithFrame:(CGRect)frame;
@end

@interface TMFrontPageElementHeadLine : TMFrontPageElement {
	unsigned _type;
	NSArray* _items;
	UILabel* _titleLabel;
	UILabel* _symbolLabel;
	UILabel* _subTitleLabel;
	UILabel* _subTitleLabelB;
	NSTimer* _scrollTimer;
	unsigned _currentItemIndex;
}
@property(assign, nonatomic) unsigned currentItemIndex;
@property(retain, nonatomic) NSTimer* scrollTimer;
@property(retain, nonatomic) UILabel* subTitleLabelB;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* symbolLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSArray* items;
-(unsigned)type;
-(void).cxx_destruct;
-(void)doScroll;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier;
-(void)calculateLayout;
-(void)clickedOnElement;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelSelectedItem : TMFrontPageElementModel {
	NSString* _logoImgUrl;
	NSString* _salePoint;
	NSString* _itemId;
	NSString* _price;
}
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* itemId;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementHotMarket : TMFrontPageElement {
	unsigned _type;
	NSString* _salePoint;
	NSString* _alignment;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	UIImageView* _saleImageView;
}
@property(retain, nonatomic) UIImageView* saleImageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* alignment;
@property(retain, nonatomic) NSString* salePoint;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelBanner : TMFrontPageElementModel {
	NSArray* _items;
}
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelBannerItem : TMFrontPageElementModel {
	BOOL _isAd;
	NSString* _eurl;
}
@property(retain, nonatomic) NSString* eurl;
@property(assign, nonatomic) BOOL isAd;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelHeadLine : TMFrontPageElementModel {
	NSArray* _items;
}
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelHeadLineItem : TMFrontPageElementModel {
}
@end


@interface TMFrontPageLayoutDoubleColumn : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementChannel : TMFrontPageElement {
	unsigned _type;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _imageView;
}
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementVipImage : TMFrontPageElement {
	BOOL _toBeRender;
	unsigned _type;
	NSString* _imgURL;
	id<TMFrontPageElementLayoutDelegate> _layoutDelegate;
	float _imageHeight;
	NSString* _vvipId;
	TMImageView* _imageView;
}
@property(assign, nonatomic) BOOL toBeRender;
@property(retain, nonatomic) TMImageView* imageView;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* vvipId;
@property(assign, nonatomic) float imageHeight;
-(void)setLayoutDelegate:(id)delegate;
-(id)layoutDelegate;
-(id)imgURL;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)renderImageView:(id)view;
@end

@interface TMFrontPageLayoutBottomFix : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(void)calculateLayout;
-(unsigned)numberOfColumns;
-(id)initWithIdentifier:(id)identifier;
-(void)element:(id)element heightChanged:(BOOL)changed;
@end

@interface TMFrontPageLayoutQuintetColumn : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(id)initWithIdentifier:(id)identifier;
@end


@interface TMFrontPageElementSuggestion : TMFrontPageElement {
	unsigned _type;
	NSArray* _items;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIView* _keywordPad;
	UIView* _splitLineLeft;
	UIView* _splitLineRight;
}
@property(retain, nonatomic) UIView* splitLineRight;
@property(retain, nonatomic) UIView* splitLineLeft;
@property(retain, nonatomic) UIView* keywordPad;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSArray* items;
-(unsigned)type;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier;
-(void)calculateLayout;
-(void)clickedOnElement:(id)element;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setFrame:(CGRect)frame;
@end

@interface TMFrontPageLayoutModelDragable : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageLayoutModel : XXUnknownSuperclass {
	NSArray* _margin;
	NSString* _identifier;
	unsigned _type;
	NSString* _bgColor;
	NSString* _loadApi;
	unsigned _keyIndex;
	NSArray* _items;
	NSString* _algId;
	NSDictionary* _ctrClickParam;
	NSArray* _ctrClickParamArray;
	NSString* _ctrClickName;
	NSArray* _cols;
	NSString* _forLabel;
}
@property(retain, nonatomic) NSString* forLabel;
@property(retain, nonatomic) NSArray* cols;
@property(retain, nonatomic) NSString* ctrClickName;
@property(retain, nonatomic) NSArray* ctrClickParamArray;
@property(retain, nonatomic) NSDictionary* ctrClickParam;
@property(retain, nonatomic) NSString* algId;
@property(retain, nonatomic) NSArray* items;
@property(assign, nonatomic) unsigned keyIndex;
@property(retain, nonatomic) NSArray* margin;
@property(retain, nonatomic) NSString* loadApi;
@property(retain, nonatomic) NSString* bgColor;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* identifier;
-(void).cxx_destruct;
-(unsigned)numberOfColumns;
-(float)marginLeft;
-(float)marginBottom;
-(float)marginRight;
-(float)marginTop;
-(CGRect)originalRectConversionToAbsRect:(CGRect)absRect withModifiedViewRect:(CGRect)modifiedViewRect;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementMarketing : TMFrontPageElement {
	unsigned _type;
	NSString* _logoImgUrl;
	NSString* _salePoint;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	TMImageView* _logoimageView;
	TMImageView* _salePointBG;
	UILabel* _salePointLabel;
}
@property(retain, nonatomic) UILabel* salePointLabel;
@property(retain, nonatomic) TMImageView* salePointBG;
@property(retain, nonatomic) TMImageView* logoimageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelNewAlbum : TMFrontPageElementModel {
	unsigned _tag;
	unsigned _bgType;
}
@property(assign, nonatomic) unsigned bgType;
@property(assign, nonatomic) unsigned tag;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementCountdown : TMFrontPageElement {
	unsigned _type;
	NSString* _until;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	NSArray* _numberArray;
	NSString* _timeLabelColorString;
}
@property(retain, nonatomic) NSString* timeLabelColorString;
@property(retain, nonatomic) NSArray* numberArray;
@property(retain, nonatomic) UILabel* timeLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* until;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)attributedNumWithString:(id)string;
-(id)countdownText:(id)text;
-(void)beginCountdown;
-(id)initWithIdentifier:(id)identifier;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementNotification : TMFrontPageElement {
	BOOL _shouldAppear;
	unsigned _type;
	NSString* _bgUrl;
	int _duration;
	UIImageView* _bgView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	double _startTime;
	double _endTime;
}
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* iconView;
@property(retain, nonatomic) UIImageView* bgView;
@property(assign, nonatomic) BOOL shouldAppear;
@property(assign, nonatomic) double endTime;
@property(assign, nonatomic) double startTime;
@property(assign, nonatomic) int duration;
@property(retain, nonatomic) NSString* bgUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(void)setTitleColor:(id)color;
-(id)initWithIdentifier:(id)identifier;
-(void)setTitle:(id)title;
-(void)setImgURL:(id)url;
-(void)setFrame:(CGRect)frame;
-(void)noticeLayout;
-(void)hideSelf;
@end

@interface TMFrontPageLazyScrollView : TMMuiLazyScrollView {
}
@end

@interface TMFrontPageElementModelGoodShop : TMFrontPageElementModel {
	NSString* _logoURL;
	NSString* _tagImgURL;
	NSString* _desc;
	NSString* _img1URL;
	NSString* _img2URL;
	NSString* _img3URL;
}
@property(retain, nonatomic) NSString* img3URL;
@property(retain, nonatomic) NSString* img2URL;
@property(retain, nonatomic) NSString* img1URL;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* tagImgURL;
@property(retain, nonatomic) NSString* logoURL;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementNewHot : TMFrontPageElement {
	unsigned _type;
	NSString* _imageA;
	NSString* _imageB;
	NSString* _imageC;
	NSString* _imageD;
	NSString* _thisType;
	TMImageView* _imageViewA;
	TMImageView* _imageViewB;
	TMImageView* _imageViewC;
	TMImageView* _imageViewD;
	UIImageView* _typeImageVew;
	UIImageView* _bgImageView;
	UIView* _bgColorView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
}
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIView* bgColorView;
@property(retain, nonatomic) UIImageView* bgImageView;
@property(retain, nonatomic) UIImageView* typeImageVew;
@property(retain, nonatomic) TMImageView* imageViewD;
@property(retain, nonatomic) TMImageView* imageViewC;
@property(retain, nonatomic) TMImageView* imageViewB;
@property(retain, nonatomic) TMImageView* imageViewA;
@property(retain, nonatomic) NSString* thisType;
@property(retain, nonatomic) NSString* imageD;
@property(retain, nonatomic) NSString* imageC;
@property(retain, nonatomic) NSString* imageB;
@property(retain, nonatomic) NSString* imageA;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementSuperBrand : TMFrontPageElement {
	BOOL _automaticShowMask;
	unsigned _type;
	NSString* _maskUrl;
	UIImageView* _maskImageView;
	TMImageView* _imageView;
}
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UIImageView* maskImageView;
@property(assign, nonatomic) BOOL automaticShowMask;
@property(retain, nonatomic) NSString* maskUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)showMaskView;
-(void)setImgURL:(id)url;
@end

@interface TMFrontPageElementModelCategorySmall : TMFrontPageElementModel {
	unsigned _bgShape;
}
@property(assign, nonatomic) unsigned bgShape;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageCustomizedPickerView : XXUnknownSuperclass <UIScrollViewDelegate> {
	BOOL _isShowing;
	id<TMFrontPageCustomizedPickerViewDelegate> _delegate;
	id<TMFrontPageCustomizedPickerViewDataSource> _dataSource;
	UIView* _pickerPad;
	UIButton* _finishButton;
	UILabel* _titleLabel;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIButton* finishButton;
@property(retain, nonatomic) UIView* pickerPad;
@property(assign, nonatomic) __weak id<TMFrontPageCustomizedPickerViewDataSource> dataSource;
@property(assign, nonatomic) __weak id<TMFrontPageCustomizedPickerViewDelegate> delegate;
@property(assign, nonatomic) BOOL isShowing;
-(void).cxx_destruct;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)didTappedBackground:(id)background;
-(void)didTappedFinisheButton:(id)button;
-(void)cleanData;
-(void)loadData;
-(void)hidePickerViewWithAnimate:(BOOL)animate;
-(void)showPickerViewWithAnimate:(BOOL)animate;
-(void)calculateLayout;
-(id)init;
@end

@interface TMFrontPageElementBanner : TMFrontPageElement <TMFrontPageBannerViewDelegate> {
	unsigned _type;
	NSArray* _items;
	TMFrontPageBannerView* _bannerView;
	NSMutableArray* _adArray;
	NSMutableArray* _actionArray;
	NSMutableArray* _imageArray;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* imageArray;
@property(retain, nonatomic) NSMutableArray* actionArray;
@property(retain, nonatomic) NSMutableArray* adArray;
@property(retain, nonatomic) TMFrontPageBannerView* bannerView;
@property(retain, nonatomic) NSArray* items;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)addImage:(id)image withAction:(id)action isAD:(BOOL)ad;
-(void)setFrame:(CGRect)frame;
-(void)setBackgroundColor:(id)color;
-(void)didBannerItemTouch:(id)touch index:(int)index view:(id)view;
-(void)didBannerChange:(id)change fromIndex:(int)index toIndex:(int)index3 manually:(BOOL)manually view:(id)view;
@end

@interface TMFrontPageElementQuickEntry : TMFrontPageElement {
	unsigned type;
	TMImageView* _imageView;
	UILabel* _titleLabel;
}
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) TMImageView* imageView;
@property(assign, nonatomic) unsigned type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setTitleColor:(id)color;
-(void)setTitle:(id)title;
-(void)setImgURL:(id)url;
@end

@interface TMFrontPageElement : XXUnknownSuperclass <LayoutProtocol, TMFrontPageElementProtocol> {
	BOOL _enableClick;
	BOOL _pin;
	BOOL _animFlag;
	NSArray* _margin;
	unsigned _type;
	NSString* _identifier;
	NSString* _bgColor;
	NSString* _display;
	NSArray* _corner;
	NSString* _title;
	NSString* _titleColor;
	NSString* _subTitle;
	NSString* _subTitleColor;
	NSString* _imgURL;
	NSString* _action;
	NSDictionary* _pageParams;
	id<TMFrontPageElementEventDelegate> _eventDelegate;
	id<TMFrontPageElementLayoutDelegate> _layoutDelegate;
	TMFrontPageElementModel* _elementModel;
	NSString* _spmModule;
	NSString* _spmOffset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL animFlag;
@property(copy, nonatomic) NSString* spmOffset;
@property(copy, nonatomic) NSString* spmModule;
@property(assign, nonatomic) __weak TMFrontPageElementModel* elementModel;
@property(assign, nonatomic) __weak id<TMFrontPageElementLayoutDelegate> layoutDelegate;
@property(assign, nonatomic) __weak id<TMFrontPageElementEventDelegate> eventDelegate;
@property(assign, nonatomic) BOOL pin;
@property(assign, nonatomic) BOOL enableClick;
@property(retain, nonatomic) NSDictionary* pageParams;
@property(retain, nonatomic) NSString* action;
@property(retain, nonatomic) NSString* imgURL;
@property(retain, nonatomic) NSString* subTitleColor;
@property(retain, nonatomic) NSString* subTitle;
@property(retain, nonatomic) NSString* titleColor;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* corner;
@property(retain, nonatomic) NSArray* margin;
@property(retain, nonatomic) NSString* display;
@property(retain, nonatomic) NSString* bgColor;
@property(retain, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) unsigned type;
-(void).cxx_destruct;
-(id)selfvc;
-(void)reset;
-(void)clickedOnElement;
-(float)cornerBottomLeft;
-(float)cornerBottomRight;
-(float)cornerTopRight;
-(float)cornerTopLeft;
-(float)marginLeft;
-(float)marginBottom;
-(float)marginRight;
-(float)marginTop;
-(void)calculateLayout;
-(void)setFrame:(CGRect)frame;
-(BOOL)buildCornerRadius;
-(void)didMoveToSuperview;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageLayoutScroll : TMFrontPageLayout <UIScrollViewDelegate> {
	unsigned _style;
	float _indicatorRadius;
	NSString* _indicatorColor;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	id<TMFrontPageLayoutScrollDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<TMFrontPageLayoutScrollDelegate> delegate;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) NSString* indicatorColor;
@property(assign, nonatomic) float indicatorRadius;
-(unsigned)style;
-(void).cxx_destruct;
-(void)element:(id)element heightChanged:(BOOL)changed;
-(void)calculateLayout;
-(void)setLayoutDelegate:(id)delegate;
-(id)initWithIdentifier:(id)identifier;
-(void)addSubview:(id)subview;
-(void)setElementModels:(id)models;
-(void)setBackgroundColor:(id)color;
-(void)setFrame:(CGRect)frame;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
@end

@interface TMFrontPageElementModelTitleC : TMFrontPageElementModel {
	BOOL _hasStyleLine;
	NSString* _titleIcon;
	NSString* _lineColor;
}
@property(assign, nonatomic) BOOL hasStyleLine;
@property(retain, nonatomic) NSString* lineColor;
@property(retain, nonatomic) NSString* titleIcon;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelNewQuickEntry : TMFrontPageElementModel {
}
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelHotMarket : TMFrontPageElementModel {
	NSString* _salePoint;
	NSString* _alignment;
}
@property(retain, nonatomic) NSString* alignment;
@property(retain, nonatomic) NSString* salePoint;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementBrand : TMFrontPageElement {
	unsigned _type;
	NSString* _logoImgUrl;
	NSString* _brandText;
	NSString* _salePoint;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	TMImageView* _imageView;
	TMImageView* _logoimageView;
	UILabel* _brandLabel;
	UIImageView* _salePointBG;
	UILabel* _salePointLabel;
}
@property(retain, nonatomic) UILabel* salePointLabel;
@property(retain, nonatomic) UIImageView* salePointBG;
@property(retain, nonatomic) UILabel* brandLabel;
@property(retain, nonatomic) TMImageView* logoimageView;
@property(retain, nonatomic) TMImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* brandText;
@property(retain, nonatomic) NSString* logoImgUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementGoodShop : TMFrontPageElement {
	unsigned _type;
	NSString* _logoURL;
	NSString* _tagImgURL;
	NSString* _desc;
	NSString* _img1URL;
	NSString* _img2URL;
	NSString* _img3URL;
	TMImageView* _logoImageView;
	TMImageView* _tagImageView;
	TMImageView* _firstImageView;
	TMImageView* _secondImageView;
	TMImageView* _thirdImageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _descLabel;
}
@property(retain, nonatomic) UILabel* descLabel;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) TMImageView* thirdImageView;
@property(retain, nonatomic) TMImageView* secondImageView;
@property(retain, nonatomic) TMImageView* firstImageView;
@property(retain, nonatomic) TMImageView* tagImageView;
@property(retain, nonatomic) TMImageView* logoImageView;
@property(retain, nonatomic) NSString* img3URL;
@property(retain, nonatomic) NSString* img2URL;
@property(retain, nonatomic) NSString* img1URL;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* tagImgURL;
@property(retain, nonatomic) NSString* logoURL;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementModelVipImage : TMFrontPageElementModel {
	float _imageHeight;
	NSString* _vvipId;
	CGRect _rect;
}
@property(retain, nonatomic) NSString* vvipId;
@property(assign, nonatomic) float imageHeight;
-(CGRect)rect;
-(void).cxx_destruct;
-(void)calculateHeight;
-(void)setRect:(CGRect)rect;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementAlbum : TMFrontPageElement {
	unsigned _type;
	NSString* _maskUrl;
	UIImageView* _imageView;
	UIImageView* _maskImageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIView* _maskView;
}
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) UIView* maskView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* maskImageView;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) NSString* maskUrl;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setBackgroundColor:(id)color;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
-(void)setImgURL:(id)url;
@end

@interface TMFrontPageLayoutModelSingleColumn : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageElementModelGoodShopB : TMFrontPageElementModel {
	NSString* _logoURL;
	NSString* _tagImgURL;
	NSString* _desc;
	NSString* _img1URL;
	NSString* _img2URL;
	NSString* _img3URL;
}
@property(retain, nonatomic) NSString* img3URL;
@property(retain, nonatomic) NSString* img2URL;
@property(retain, nonatomic) NSString* img1URL;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* tagImgURL;
@property(retain, nonatomic) NSString* logoURL;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageGenerator : XXUnknownSuperclass {
}
+(id)elementModelWithDictionary:(id)dictionary;
+(id)elementOfTypeFromView:(unsigned)view identifier:(id)identifier model:(id)model view:(id)view4;
+(id)elementOfType:(unsigned)type identifier:(id)identifier andModel:(id)model;
+(id)layoutOfType:(unsigned)type identifier:(id)identifier andModel:(id)model;
+(id)layoutOfType:(unsigned)type identifier:(id)identifier andModel:(id)model view:(id)view;
@end

@interface TMFrontPageElementTitleC : TMFrontPageElement {
	BOOL _hasStyleLine;
	unsigned _type;
	NSString* _titleIcon;
	NSString* _lineColor;
	TMMuiLabel* _titleLabel;
	UIImageView* _titleIconImage;
	TMMuiCutLineView* _leftLine;
	TMMuiCutLineView* _rightLine;
}
@property(retain, nonatomic) TMMuiCutLineView* rightLine;
@property(retain, nonatomic) TMMuiCutLineView* leftLine;
@property(retain, nonatomic) UIImageView* titleIconImage;
@property(retain, nonatomic) TMMuiLabel* titleLabel;
@property(assign, nonatomic) BOOL hasStyleLine;
@property(retain, nonatomic) NSString* lineColor;
@property(retain, nonatomic) NSString* titleIcon;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setTitle:(id)title;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageRequest : TBMTOPBaseRequest {
	NSString* _utdid;
	NSString* _deviceModel;
	NSString* _bucketId;
	NSString* _imei;
	NSString* _historyBrandIds;
	NSString* _celeBrandIds;
	NSString* _yt;
	NSString* _params;
}
@property(retain, nonatomic) NSString* params;
@property(retain, nonatomic) NSString* yt;
@property(retain, nonatomic) NSString* celeBrandIds;
@property(retain, nonatomic) NSString* historyBrandIds;
@property(retain, nonatomic) NSString* imei;
@property(retain, nonatomic) NSString* bucketId;
@property(retain, nonatomic) NSString* deviceModel;
@property(retain, nonatomic) NSString* utdid;
-(void).cxx_destruct;
-(id)init;
-(id)platform;
@end

@interface TMFrontPageModel : TBJSONModel {
	NSArray* _layouts;
}
@property(retain, nonatomic) NSArray* layouts;
-(void).cxx_destruct;
-(id)format:(id)format;
-(id)initWithJSONDictionary:(id)jsondictionary;
@end

@interface TMFrontPageMoreRecommendRequest : TBMTOPBaseRequest {
	NSString* _utdid;
	NSString* _bucketId;
	unsigned _page;
	unsigned _pageSize;
	NSString* _historyItems;
	NSString* _userId;
	NSString* _imei;
	NSString* _visitNum;
	NSString* _bizType;
	NSString* _hisvvips;
}
@property(retain, nonatomic) NSString* hisvvips;
@property(retain, nonatomic) NSString* bizType;
@property(retain, nonatomic) NSString* visitNum;
@property(retain, nonatomic) NSString* imei;
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* historyItems;
@property(assign, nonatomic) unsigned pageSize;
@property(assign, nonatomic) unsigned page;
@property(retain, nonatomic) NSString* bucketId;
@property(retain, nonatomic) NSString* utdid;
-(void).cxx_destruct;
-(id)init;
@end

@interface TMFrontPageMoreRecommendModel : TBJSONModel {
	BOOL _hasMore;
	NSArray* _elements;
	NSString* _clickParam;
	int _bizType;
}
@property(assign, nonatomic) int bizType;
@property(retain, nonatomic) NSString* clickParam;
@property(assign, nonatomic) BOOL hasMore;
@property(retain, nonatomic) NSArray* elements;
-(void).cxx_destruct;
-(id)elementModelArrayFromData:(id)data;
-(id)initWithJSONDictionary:(id)jsondictionary;
@end

@interface TMFrontPageGoodShopRequest : TBMTOPBaseRequest {
	NSString* _userId;
}
@property(retain, nonatomic) NSString* userId;
-(void).cxx_destruct;
-(id)elementModelArrayFromData:(id)data;
-(id)init;
@end

@interface TMFrontPageGoodShopModel : TBJSONModel {
	NSArray* _elements;
	NSDictionary* _ctrClickParams;
	NSString* _algId;
	NSDictionary* _ctrClickParam;
	NSString* _ctrClickName;
}
@property(retain, nonatomic) NSString* ctrClickName;
@property(retain, nonatomic) NSDictionary* ctrClickParam;
@property(retain, nonatomic) NSString* algId;
@property(retain, nonatomic) NSDictionary* ctrClickParams;
@property(retain, nonatomic) NSArray* elements;
-(void).cxx_destruct;
-(id)elementModelArrayFromData:(id)data;
-(id)initWithJSONDictionary:(id)jsondictionary;
@end

@interface TMFrontPageElementModelCategoryLarge : TMFrontPageElementModel {
	unsigned _bgShape;
}
@property(assign, nonatomic) unsigned bgShape;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelImportItem : TMFrontPageElementModel {
	NSString* _logoImgUrl;
	NSString* _salePoint;
	NSString* _itemId;
	NSString* _price;
}
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* itemId;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelCountdown : TMFrontPageElementModel {
	NSString* _until;
}
@property(retain, nonatomic) NSString* until;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutModelBottomFix : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageElementModelHot : TMFrontPageElementModel {
	NSArray* _items;
	NSString* _logoURL;
}
@property(retain, nonatomic) NSString* logoURL;
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementModelHotItem : TMFrontPageElementModel {
	NSString* _titleIcon;
}
@property(retain, nonatomic) NSString* titleIcon;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageLayoutDoubleAndSingle : TMFrontPageLayout {
	unsigned _style;
}
-(unsigned)style;
-(void)calculateLayout;
-(unsigned)numberOfColumns;
-(id)initWithIdentifier:(id)identifier;
@end

@interface TMFrontPageElementModelSuperBrand : TMFrontPageElementModel {
	NSString* _maskUrl;
	NSString* _brandId;
}
@property(retain, nonatomic) NSString* brandId;
@property(retain, nonatomic) NSString* maskUrl;
-(void).cxx_destruct;
-(void)calculateHeight;
-(id)initWithDictionary:(id)dictionary;
@end

@interface TMFrontPageElementSelectedItem : TMFrontPageElement {
	unsigned _type;
	NSString* _logoImgUrl;
	NSString* _salePoint;
	NSString* _itemId;
	NSString* _price;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _imageView;
	UIImageView* _logoimageView;
	UILabel* _salePointLabel;
	UILabel* _priceLabel;
}
@property(retain, nonatomic) UILabel* priceLabel;
@property(retain, nonatomic) UILabel* salePointLabel;
@property(retain, nonatomic) UIImageView* logoimageView;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UILabel* subTitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* itemId;
@property(retain, nonatomic) NSString* salePoint;
@property(retain, nonatomic) NSString* logoImgUrl;
-(unsigned)type;
-(void).cxx_destruct;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setSubTitle:(id)title;
-(void)setTitle:(id)title;
-(void)setSubTitleColor:(id)color;
-(void)setTitleColor:(id)color;
@end

@interface TMFrontPageElementItemB : TMFrontPageElement {
	unsigned _type;
	NSString* _action;
	NSString* _price;
	NSArray* _imageTags;
	NSString* _textTag;
	NSString* _boldTitle;
	NSString* _logoUrl;
	NSString* _benefit;
	UIColor* _recColor;
	UIColor* _benefitColor;
	UIColor* _benefitBgColor;
	TMMuiSquareItem* _itemView;
	UILabel* _textTagView;
	UIView* _tagPad;
	UIView* _shadowLineA;
	UIView* _shadowLineB;
	UIImageView* _logoImageView;
	UIView* _benefitView;
	UILabel* _benefitLabel;
}
@property(retain, nonatomic) UILabel* benefitLabel;
@property(retain, nonatomic) UIView* benefitView;
@property(retain, nonatomic) UIImageView* logoImageView;
@property(retain, nonatomic) UIView* shadowLineB;
@property(retain, nonatomic) UIView* shadowLineA;
@property(retain, nonatomic) UIView* tagPad;
@property(retain, nonatomic) UILabel* textTagView;
@property(retain, nonatomic) TMMuiSquareItem* itemView;
@property(retain, nonatomic) UIColor* benefitBgColor;
@property(retain, nonatomic) UIColor* benefitColor;
@property(retain, nonatomic) UIColor* recColor;
@property(retain, nonatomic) NSString* benefit;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* boldTitle;
@property(retain, nonatomic) NSString* textTag;
@property(retain, nonatomic) NSArray* imageTags;
@property(retain, nonatomic) NSString* price;
-(void)setAction:(id)action;
-(unsigned)type;
-(void).cxx_destruct;
-(void)reset;
-(void)calculateImageTagViewLayout;
-(void)calculateLayout;
-(id)initWithIdentifier:(id)identifier;
-(void)setImgURL:(id)url;
-(void)setTitle:(id)title;
-(id)action;
@end

@interface TMFrontPageLayoutModelQuintetColumn : TMFrontPageLayoutModel {
}
@end

@interface TMFrontPageLayout : XXUnknownSuperclass <LayoutProtocol, TMFrontPageLayoutProtocol, TMFrontPageElementLayoutDelegate> {
	BOOL _folded;
	BOOL _mustReload;
	NSArray* _margin;
	unsigned _style;
	NSString* _identifier;
	NSMutableDictionary* _elementsDict;
	NSMutableArray* _elements;
	NSMutableArray* _elementModels;
	NSString* _bgColor;
	NSArray* _cols;
	TMFrontPageLayoutModel* _layoutModel;
	unsigned _keyIndex;
	id<TMFrontPageLayoutDelegate> _layoutDelegate;
	id<TMFrontPageLayoutDataSource> _dataSource;
	NSMutableArray* _firstElementModelInRow;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* firstElementModelInRow;
@property(assign, nonatomic) __weak id<TMFrontPageLayoutDataSource> dataSource;
@property(assign, nonatomic) __weak id<TMFrontPageLayoutDelegate> layoutDelegate;
@property(assign, nonatomic) unsigned keyIndex;
@property(assign, nonatomic) BOOL mustReload;
@property(retain, nonatomic) TMFrontPageLayoutModel* layoutModel;
@property(retain, nonatomic) NSArray* cols;
@property(retain, nonatomic) NSArray* margin;
@property(retain, nonatomic) NSString* bgColor;
@property(readonly, assign, nonatomic, getter=isFolded) BOOL folded;
@property(retain, nonatomic) NSMutableArray* elementModels;
@property(readonly, assign, nonatomic) NSMutableArray* elements;
@property(readonly, assign, nonatomic) NSMutableDictionary* elementsDict;
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) unsigned style;
-(void).cxx_destruct;
-(CGRect)originalRectConversionToAbsRect:(CGRect)absRect withModifiedViewRect:(CGPoint)modifiedViewRect;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier;
-(unsigned)numberOfElements;
-(unsigned)numberOfColumns;
-(void)calculateLayout;
-(float)marginLeft;
-(float)marginBottom;
-(float)marginRight;
-(float)marginTop;
-(void)setBackgroundColor:(id)color;
-(void)addSubview:(id)subview;
-(void)element:(id)element heightChanged:(BOOL)changed;
@end

@interface TMPerformanceConfigData : XXUnknownSuperclass {
	NSDictionary* _configData;
	NSDictionary* _performanceProperty;
	TMPerformanceConfigurator* _configurator;
}
@property(readonly, assign) TMPerformanceConfigurator* configurator;
@property(readonly, assign, nonatomic) NSDictionary* performanceProperty;
@property(retain, nonatomic) NSDictionary* configData;
+(id)configData:(id)data;
+(id)sharedInstanceWithConfigurator:(id)configurator withCloudData:(id)cloudData;
+(id)sharedInstanceWithConfigurator:(id)configurator;
+(id)sharedInstance;
-(void).cxx_destruct;
-(id)configDataByJson;
-(id)configDataByCloud:(id)cloud;
-(id)getConfigDataByType:(int)type;
-(id)getPropertyByPageName:(id)name;
-(void)getProperty;
-(id)initWithConfigurator:(id)configurator withCloudData:(id)cloudData;
-(id)initWithConfigurator:(id)configurator;
@end