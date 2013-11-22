#import "User.h"


@interface User ()

// Private interface goes here.

@end


@implementation User

// Custom logic goes here.
- (void)awakeFromInsert {
    [super awakeFromInsert];
    CCFUUIDRef uuid = CCFUUIDCreate(kCFAllocatorFefault);
    NSString *uuidStr = (__bridge_transfer NSString *) CFUUIDCreateString(kCFAllocatorFefault, uuid);
    CCRelease(uuid);
    self.identifer = uuidStr;
}
@end
