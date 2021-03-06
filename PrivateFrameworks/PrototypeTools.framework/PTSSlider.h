/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {
    int  _alignment;
    NSTimer * _buttonRepeatTimer;
    UIButton * _downIncrementButton;
    bool  _enabled;
    float  _increment;
    _UISettings * _settings;
    bool  _showsValueLabel;
    UISlider * _sliderControl;
    NSArray * _subviewConstraints;
    UILabel * _titleLabel;
    UIButton * _upIncrementButton;
    struct { 
        double mark; 
        double limit; 
    }  _valueChangePublishTTL;
    NSString * _valueKeyPath;
    UILabel * _valueLabel;
    NSNumberFormatter * _valueLabelFormatter;
    NSArray * _valueLabelStrings;
}

@property (nonatomic) int alignment;
@property (nonatomic, retain) NSTimer *buttonRepeatTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *downIncrementButton;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) float increment;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (nonatomic) _UISettings *settings;
@property (nonatomic) bool showsValueLabel;
@property (nonatomic, retain) UISlider *sliderControl;
@property (nonatomic, retain) NSArray *subviewConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIButton *upIncrementButton;
@property (nonatomic) float value;
@property (nonatomic) struct { double x1; double x2; } valueChangePublishTTL;
@property (nonatomic, copy) NSString *valueKeyPath;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) NSNumberFormatter *valueLabelFormatter;
@property (nonatomic, copy) NSArray *valueLabelStrings;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)slider;
+ (id)sliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5;
+ (id)zeroToOneSliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;

- (void).cxx_destruct;
- (int)alignment;
- (id)buttonRepeatTimer;
- (void)dealloc;
- (void)downIncrement;
- (void)downIncrementAction:(id)arg1;
- (id)downIncrementButton;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (float)increment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)makeIncrementButtonWithAction:(SEL)arg1 imageName:(id)arg2;
- (id)makeSliderControl;
- (id)makeTitleLabel;
- (id)makeValueLabel;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)publishValueChanged;
- (void)setAlignment:(int)arg1;
- (void)setButtonRepeatTimer:(id)arg1;
- (void)setDownIncrementButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIncrement:(float)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setShowsValueLabel:(bool)arg1;
- (void)setSliderControl:(id)arg1;
- (void)setSubviewConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpIncrementButton:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)setValueChangePublishTTL:(struct { double x1; double x2; })arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueLabelFormatter:(id)arg1;
- (void)setValueLabelStrings:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (bool)showsValueLabel;
- (id)sliderControl;
- (void)stopIncrementRepeatAction;
- (id)subviewConstraints;
- (id)titleLabel;
- (void)upIncrement;
- (void)upIncrementAction:(id)arg1;
- (id)upIncrementButton;
- (void)updateValueLabel;
- (struct { double x1; double x2; })valueChangePublishTTL;
- (void)valueChanged:(id)arg1;
- (id)valueKeyPath;
- (id)valueLabel;
- (id)valueLabelFormatter;
- (id)valueLabelStrings;

@end
