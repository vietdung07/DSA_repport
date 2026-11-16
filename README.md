# DSA_repport

# **1. Các tình huống nghiệp vụ nên bổ sung**

## **A. Quản lý phòng**

- Mỗi phòng có một số phòng và thuộc một tầng và một loại phòng nhất định.
- Mỗi phòng có giá thuê, sức chứa tối đa và trạng thái hoạt động.
- Nhân viên khách sạn có thể thêm, xóa, cập nhật thông tin phòng.
- Một phòng có thể được đặt bởi nhiều khách hàng khác nhau ở các khoảng thời gian khác nhau.
- Một phòng không thể được đặt bởi hai đơn đặt phòng có khoảng thời gian giao nhau.
- Phòng đang bảo trì hoặc chưa sẵn sàng không được phép đặt.
- Khách hàng có thể tìm kiếm, lọc phòng theo tầng, loại phòng, giá tiền và tình trạng còn trống.

## **B. Quản lý đặt phòng**

- Mỗi đơn đặt phòng có mã định danh riêng, thông tin khách hàng, phòng được đặt, ngày nhận phòng và ngày trả phòng.
- Một khách hàng có thể tạo nhiều đơn đặt phòng.
- Một đơn đặt phòng có thể bao gồm một hoặc nhiều phòng (nếu bạn muốn hỗ trợ đặt nhiều phòng trong cùng một giao dịch).
- Mỗi đơn đặt phòng có trạng thái riêng: đang chờ, đã xác nhận, đã hủy, đã nhận phòng, đã hoàn thành.
- Khách hàng có thể thay đổi thời gian hoặc phòng đã đặt nếu thỏa mãn điều kiện và phòng mới còn trống.
- Hệ thống phải kiểm tra tính hợp lệ của ngày nhận phòng và ngày trả phòng.
- Hệ thống phải ngăn chặn việc đặt phòng trùng thời gian.

## **C. Quản lý thanh toán và tiền đặt cọc**

- Khách hàng phải thanh toán một khoản tiền đặt cọc để xác nhận đơn đặt phòng.
- Mỗi đơn đặt phòng lưu lại số tiền đặt cọc và trạng thái thanh toán.
- Khi khách hàng đến nhận phòng, tiền đặt cọc được khấu trừ vào tổng chi phí lưu trú.
- Nếu khách hàng không đến nhận phòng đúng thời hạn (No-show), khách sạn có quyền giữ tiền đặt cọc và hủy đơn đặt phòng.
- Nếu khách hàng hủy phòng trước thời hạn quy định, khách sạn có thể hoàn trả tiền đặt cọc.
- Hệ thống lưu lại lịch sử các giao dịch thanh toán và hoàn tiền.

## **D. Quản lý danh sách chờ**

- Khi không còn phòng phù hợp, khách hàng có thể đăng ký vào danh sách chờ.
- Mỗi yêu cầu chờ lưu thông tin khách hàng, loại phòng mong muốn và khoảng thời gian muốn thuê.
- Khách hàng VIP được ưu tiên hơn khách hàng thông thường.
- Nếu có phòng phù hợp trở nên trống, hệ thống xem xét các yêu cầu trong danh sách chờ để lựa chọn khách hàng tiếp theo.
- Khách hàng có thể hủy yêu cầu đặt phòng khi vẫn đang trong danh sách chờ.
- Khi yêu cầu được chuyển từ danh sách chờ sang đặt phòng chính thức, hệ thống cập nhật trạng thái yêu cầu.

## **E. Quản lý lưu trú**

- Khi khách hàng đến nhận phòng, nhân viên kiểm tra thông tin đơn đặt phòng.
- Nếu hợp lệ, hệ thống chuyển đơn đặt phòng sang trạng thái đã nhận phòng.
- Trong thời gian lưu trú, khách hàng có thể sử dụng các dịch vụ bổ sung của khách sạn.
- Khi khách hàng trả phòng, hệ thống tổng hợp chi phí phòng và các dịch vụ đã sử dụng.
- Sau khi hoàn tất thủ tục trả phòng, hệ thống cập nhật lịch sử lưu trú của khách hàng.
- Phòng sau khi trả cần được dọn dẹp trước khi chuyển sang trạng thái sẵn sàng phục vụ khách tiếp theo.

# **2. Các quy tắc nghiệp vụ quan trọng nên xác định rõ**

Đây là phần tôi khuyên bạn không nên bỏ qua, bởi chúng sẽ quyết định cách thiết kế các lớp và thuật toán.

| STT | Quy tắc                      | Ý nghĩa                                                                    |
| --- | ---------------------------- | -------------------------------------------------------------------------- |
| 1   | Không đặt trùng phòng        | Hai đơn không được giao nhau về thời gian trên cùng một phòng              |
| 2   | Ngày trả phải sau ngày nhận  | Đảm bảo khoảng thời gian hợp lệ                                            |
| 3   | Phòng bảo trì không được đặt | Kiểm tra trạng thái phòng                                                  |
| 4   | No-show                      | Khách không đến đúng hạn có thể bị hủy đơn và mất cọc                      |
| 5   | Ưu tiên VIP                  | Khách VIP được xếp trước trong danh sách chờ                               |
| 6   | Hủy đơn                      | Chỉ được hủy khi thỏa mãn điều kiện                                        |
| 7   | Thanh toán                   | Không được hoàn thành thủ tục trả phòng nếu chưa xử lý nghĩa vụ thanh toán |
| 8   | Hoàn tác                     | Có thể khôi phục một số thao tác đã thực hiện                              |

Một điểm cần xác định rõ: nếu khách VIP và khách thường cùng chờ, khách VIP được ưu tiên trước; nếu cùng mức ưu tiên thì ai đăng ký trước được xử lý trước. Đây là quy tắc phù hợp để triển khai Priority Queue.

# **3. Các chức năng quản lý hệ thống**

Ngoài mô tả hành vi của khách hàng, bạn nên bổ sung các hành vi của nhân viên khách sạn.

- Quản lý phòng: thêm, xóa, sửa, tìm kiếm phòng.
- Quản lý khách hàng: thêm, xóa, sửa, tìm kiếm thông tin khách hàng.
- Quản lý đơn đặt phòng: tạo, cập nhật, xác nhận, hủy đơn.
- Quản lý danh sách chờ: thêm, xóa, ưu tiên và xử lý yêu cầu chờ.
- Quản lý lưu trú: check-in, check-out.
- Quản lý thanh toán: ghi nhận đặt cọc, thanh toán và hoàn tiền.
- Thống kê: doanh thu, số lượng phòng trống, số lượt lưu trú.

# **4. Một số quyết định thiết kế bạn cần chốt**

Có một số vấn đề trong mô tả hiện tại chưa được xác định. Tôi đề xuất các giả định đơn giản để đồ án không bị quá phức tạp.

| Vấn đề                   | Phương án đề xuất                                            |
| ------------------------ | ------------------------------------------------------------ |
| Một đơn đặt nhiều phòng? | Có thể cho phép, nhưng mỗi phòng có thông tin lịch đặt riêng |
| Đặt cọc?                 | Một tỷ lệ cố định của tổng tiền phòng                        |
| No-show?                 | Tự động hủy sau một khoảng thời gian quy định                |
| Khách VIP?               | Ưu tiên trong Priority Queue                                 |
| Khách chờ?               | Queue kết hợp Priority Queue                                 |
| Hủy đặt phòng?           | Chỉ hủy đơn chưa check-in                                    |
| Phòng bảo trì?           | Không cho phép đặt trong thời gian bảo trì                   |
| Hoàn tác?                | Dùng Stack lưu các thao tác có thể hoàn tác                  |

# **5. Cấu trúc tài liệu tôi đề xuất**

Bạn có thể tổ chức toàn bộ phần mô tả vấn đề theo bố cục sau:

## **I. Mô tả vấn đề**

**1. Phạm vi hệ thống**

- Quản lý khách sạn một cơ sở.
- Quản lý phòng, khách hàng, đơn đặt phòng và danh sách chờ.

**2. Các đối tượng cần quản lý**

- Khách hàng.
- Phòng.
- Đơn đặt phòng.
- Danh sách chờ.
- Giao dịch thanh toán.
- Lịch sử lưu trú.

**3. Các quy tắc nghiệp vụ**

- Quy tắc đặt phòng.
- Quy tắc kiểm tra phòng trống.
- Quy tắc đặt cọc và hủy phòng.
- Quy tắc ưu tiên khách VIP.
- Quy tắc nhận phòng và trả phòng.

**4. Các chức năng hệ thống**

- Quản lý phòng.
- Quản lý khách hàng.
- Quản lý đặt phòng.
- Quản lý danh sách chờ.
- Quản lý thanh toán.
- Thống kê và báo cáo.

**5. Các yêu cầu về cấu trúc dữ liệu**

- Mảng 2 chiều.
- BST.
- Queue / Priority Queue.
- Linked List.
- Stack.
- Thuật toán tìm kiếm, sắp xếp và kiểm tra giao nhau giữa các khoảng thời gian.

**Lời khuyên quan trọng:** Đừng vội chuyển toàn bộ những gạch đầu dòng trên thành class. Hãy hoàn thiện mô tả nghiệp vụ trước, sau đó mới xác định Entity, Attribute, Method và quan hệ giữa các lớp.

Một khi phần mô tả vấn đề đủ rõ, việc thiết kế OOP sẽ trở thành quá trình ánh xạ các quy tắc nghiệp vụ sang các đối tượng và trách nhiệm tương ứng, thay vì phải nghĩ ra class một cách cảm tính.