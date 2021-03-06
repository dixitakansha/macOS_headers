//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PSCategoryController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class NSButton, NSMutableArray, NSPopUpButton, NSString, NSTableView, NSTextField, PSSectionView;

__attribute__((visibility("hidden")))
@interface PSBabelCategoryController : PSCategoryController <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate>
{
    BOOL _isSetup;
    NSMutableArray *_babelTableData;
    PSSectionView *_disabledSettingsSectionView;
    NSPopUpButton *_disabledSettingsConfigFileHandlingTypePopUpButton;
    PSSectionView *_introSectionView;
    NSPopUpButton *_configFileHandlingTypePopUpButton;
    NSTextField *_moduleIDTextField;
    NSTextField *_beforeCommentTextField;
    NSTextField *_afterCommentTextField;
    NSButton *_stripCommentsCheckbox;
    NSButton *_retainLineNumbersCheckbox;
    NSButton *_insertModuleIDsCheckbox;
    PSSectionView *_presetsSectionView;
    NSButton *_es2017PresetCheckbox;
    NSButton *_es2016PresetCheckbox;
    NSButton *_es2015PresetCheckbox;
    NSButton *_stage0PresetCheckbox;
    NSButton *_stage1PresetCheckbox;
    NSButton *_stage2PresetCheckbox;
    NSButton *_stage3PresetCheckbox;
    NSButton *_reactPresetCheckbox;
    PSSectionView *_customPresetsAndPluginsSectionView;
    NSTextField *_customPluginsTextField;
    NSTextField *_customPresetsTextField;
    PSSectionView *_tableWrapperSectionView;
    NSTableView *_tableView;
    BOOL _showOptionDescriptions;
    NSString *_showDescriptionsTitle;
}

@property(copy, nonatomic) NSString *showDescriptionsTitle; // @synthesize showDescriptionsTitle=_showDescriptionsTitle;
- (void)showDescriptionsLinkTextFieldAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)configFileHandlingTypePopUpButtonAction:(id)arg1;
- (void)transformerCheckboxAction:(id)arg1;
- (void)presetCheckboxAction:(id)arg1;
- (id)initialSettingsForBabelForMode:(long long)arg1;
- (double)totalHeightOfTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)didResignActiveStatus;
- (id)sectionViewsForCategory:(long long)arg1 settingsMode:(long long)arg2;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

