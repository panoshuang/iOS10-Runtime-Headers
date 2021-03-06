/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGCircleCheckView : UIView {
    WGCheckView * _checkView;
    UIImageView * _circleView;
}

@property (getter=isChecked, nonatomic) bool checked;

- (void).cxx_destruct;
- (void)_configureCheckViewIfNecessary;
- (id)_configureCircleViewIfNecessary;
- (bool)_isFrozen;
- (void)_setChecked:(bool)arg1 completion:(id /* block */)arg2;
- (void)_setFrozen:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
