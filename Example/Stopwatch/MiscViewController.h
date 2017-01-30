#import <UIKit/UIKit.h>

@interface MiscViewController : UIViewController <UIScrollViewDelegate>

@property IBOutlet UILabel *versionLabel;
@property IBOutlet UILabel *flushModeLabel;
@property NSInteger attributionCounter;
@property IBOutlet UIScrollView *scrollView;
@property IBOutlet UITextField *apiKeyTextField;
@property IBOutlet UITextField *endointTextField;
@property (weak, nonatomic) IBOutlet UISwitch *inAppMessageDelegateSwitch;

- (IBAction)flushAppboyData:(id)sender;
- (IBAction)changeAppboyFlushMode:(id)sender;
- (IBAction)logAttributionData:(id)sender;
- (IBAction)launchCachedFilesAlertView:(id)sender;
- (IBAction)logSingleLocation:(id)sender;
- (IBAction)setInAppDelegateSwitchChanged:(id)sender;

@end