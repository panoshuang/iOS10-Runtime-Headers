/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate> {
    NSString * _emptyPlaceholderText;
    PUSearchGridDataSource * _searchGridDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSearchGridDataSource *searchGridDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_containsScene;
- (id)_subtitle;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)_updateNavigationTitleView;
- (bool)allowSlideshowButton;
- (id)emptyPlaceholderText;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)searchGridDataSource;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (void)setEmptyPlaceholderText:(id)arg1;
- (void)setSearchGridDataSource:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
